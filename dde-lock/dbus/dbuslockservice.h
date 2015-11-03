/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -c DBusLockService -p dbuslockservice com.deepin.dde.lock.xml
 *
 * qdbusxml2cpp is Copyright (C) 2015 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef DBUSLOCKSERVICE_H_1446444266
#define DBUSLOCKSERVICE_H_1446444266

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface com.deepin.dde.lock
 */
class DBusLockService: public QDBusAbstractInterface
{
    Q_OBJECT

    Q_SLOT void __propertyChanged__(const QDBusMessage& msg)
    {
        QList<QVariant> arguments = msg.arguments();
        if (3 != arguments.count())
            return;
        QString interfaceName = msg.arguments().at(0).toString();
        if (interfaceName !="com.deepin.dde.lock")
            return;
        QVariantMap changedProps = qdbus_cast<QVariantMap>(arguments.at(1).value<QDBusArgument>());
        QStringList keys = changedProps.keys();
        foreach(const QString &prop, keys) {
        const QMetaObject* self = metaObject();
            for (int i=self->propertyOffset(); i < self->propertyCount(); ++i) {
                QMetaProperty p = self->property(i);
                if (p.name() == prop) {
 	            Q_EMIT p.notifySignal().invoke(this);
                }
            }
        }
   }
public:
    static inline const char *staticInterfaceName()
    { return "com.deepin.dde.lock"; }

public:
    DBusLockService(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~DBusLockService();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<bool> AddNoPwdLogin(const QString &username)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(username);
        return asyncCallWithArgumentList(QStringLiteral("AddNoPwdLogin"), argumentList);
    }

    inline QDBusPendingReply<> ExitLock(const QString &username, const QString &password)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(username) << QVariant::fromValue(password);
        return asyncCallWithArgumentList(QStringLiteral("ExitLock"), argumentList);
    }

    inline QDBusPendingReply<bool> IsLiveCD(const QString &username)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(username);
        return asyncCallWithArgumentList(QStringLiteral("IsLiveCD"), argumentList);
    }

    inline QDBusPendingReply<bool> NeedPwd(const QString &username)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(username);
        return asyncCallWithArgumentList(QStringLiteral("NeedPwd"), argumentList);
    }

    inline QDBusPendingReply<bool> RemoveNoPwdLogin(const QString &username)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(username);
        return asyncCallWithArgumentList(QStringLiteral("RemoveNoPwdLogin"), argumentList);
    }

    inline QDBusPendingReply<bool> UnlockCheck(const QString &username, const QString &password)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(username) << QVariant::fromValue(password);
        return asyncCallWithArgumentList(QStringLiteral("UnlockCheck"), argumentList);
    }

Q_SIGNALS: // SIGNALS
// begin property changed signals
};

namespace com {
  namespace deepin {
    namespace dde {
      typedef ::DBusLockService lock;
    }
  }
}
#endif