#ifndef GOOGLE_H
#define GOOGLE_H


#include <QObject>
#include <QQmlApplicationEngine>
#include <QDebug>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QtWebEngine>

#include <apppluginterface/IAppPluginInterface.h>
#include <apppluginterface/PluginMetaData.h>

#include "plugin-web-google_global.h"

class PLUGINWEBGOOGLE_EXPORT Google : public IAppPluginInterface
{
Q_OBJECT
    Q_PLUGIN_METADATA(IID
                              IAppPluginInterface_iid
                              FILE
                              "mainfest.json")
    Q_INTERFACES(IAppPluginInterface)
public:
    Google();

    ~Google() override;

    void loader() override;


signals:

    void sendMessage(PluginMetaData *data) override;

public slots:

    void receiveMessage(PluginMetaData *data) override;


private:
    QQmlApplicationEngine engine;

};

#endif // GOOGLE_H
