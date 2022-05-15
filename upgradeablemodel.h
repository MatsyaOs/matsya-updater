

#ifndef UPGRADEABLEMODEL_H
#define UPGRADEABLEMODEL_H

#include <QAbstractListModel>

class UpgradeableModel : public QAbstractListModel
{
    Q_OBJECT

public:
    enum Roles {
        NameRole = Qt::UserRole + 1,
        VersionRole,
        DownloadSize
    };
    Q_ENUM(Roles)

    struct PackageInfo {
        QString name;
        QString version;
        quint64 downloadSize;
    };

    static UpgradeableModel *self();
    explicit UpgradeableModel(QObject *parent = nullptr);

    QHash<int, QByteArray> roleNames() const override;

    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

    void addPackage(const QString &name, const QString &version, quint64 downloadSize);

private:
    QList<PackageInfo> m_packages;
};

#endif // UPGRADEABLEMODEL_H
