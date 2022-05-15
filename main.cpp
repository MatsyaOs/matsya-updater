

#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QDBusConnection>
#include <QQmlContext>
#include <QTranslator>
#include <QLocale>
#include <QFile>

#include "updatorhelper.h"
#include "upgradeablemodel.h"

int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

    QGuiApplication app(argc, argv);

    const char *uri = "Matsya.Updator";
    qmlRegisterType<UpdatorHelper>(uri, 1, 0, "Updator");
    qmlRegisterType<UpgradeableModel>(uri, 1, 0, "UpgradeableModel");

    if (!QDBusConnection::sessionBus().registerService("com.matsya.UpdatorGui")) {
        return 0;
    }

    // Translations
    QLocale locale;
    QString qmFilePath = QString("%1/%2.qm").arg("/usr/share/matsya-updator/translations/").arg(locale.name());
    if (QFile::exists(qmFilePath)) {
        QTranslator *translator = new QTranslator(QGuiApplication::instance());
        if (translator->load(qmFilePath)) {
            QGuiApplication::installTranslator(translator);
        } else {
            translator->deleteLater();
        }
    }

    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.rootContext()->setContextProperty("upgradeableModel", UpgradeableModel::self());
    engine.load(url);

    return app.exec();
}
