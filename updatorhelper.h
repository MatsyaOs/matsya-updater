

#ifndef UPDATORHELPER_H
#define UPDATORHELPER_H

#include <QObject>

// QApt
#include <QApt/Backend>
#include <QApt/Config>
#include <QApt/Transaction>

class UpdatorHelper : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString version READ version CONSTANT)
    Q_PROPERTY(QString statusDetails READ statusDetails NOTIFY statusDetailsChanged)
    Q_PROPERTY(int checkProgress READ checkProgress NOTIFY checkProgressChanged)

public:
    explicit UpdatorHelper(QObject *parent = nullptr);
    ~UpdatorHelper();

    Q_INVOKABLE void checkUpdates();
    Q_INVOKABLE void upgrade();
    Q_INVOKABLE void reboot();

    QString version();
    QString statusDetails();
    int checkProgress();

signals:
    void startingUpdate();
    void updateFinished();
    void updateError();
    void checkUpdateFinished();
    void statusDetailsChanged();
    void checkProgressChanged();
    void checkError(const QString &details);

private:
    QString m_currentVersion;
    QString m_statusDetails;
    int m_checkProgress;
    QApt::Backend *m_backend;
    QApt::Transaction *m_trans;
};

#endif // UPDATORHELPER_H
