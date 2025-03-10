/*
 * Copyright (C) 2018-2023 QuasarApp.
 * Distributed under the lgplv3 software license, see the accompanying
 * Everyone is permitted to copy and distribute verbatim copies
 * of this license document, but changing it is not allowed.
 */

#ifndef QTDIR_H
#define QTDIR_H

#include <QDir>
#include <humanreadableobject.h>
#include "deploy_global.h"
#include "deploycore.h"

class DEPLOYSHARED_EXPORT QtDir: QuasarAppUtils::iHRO {
    QString libs;
    QString bins;
    QString libexecs;
    QString plugins;
    QString qmls;
    QString translations;
    QString resources;

    Platform _platform = UnknownPlatform;

    QtMajorVersion _qtVersion = NoQt;
public:
    QString getLibs() const;
    void setLibs(const QString &value);
    QString getBins() const;
    void setBins(const QString &value);
    QString getLibexecs() const;
    void setLibexecs(const QString &value);
    QString getPlugins() const;
    void setPlugins(const QString &value);
    QString getQmls() const;
    void setQmls(const QString &value);
    QString getTranslations() const;
    void setTranslations(const QString &value);
    QString getResources() const;
    void setResources(const QString &value);
    Platform getQtPlatform() const;

    /**
     * @brief isQt - This method check a path for belonging to QtDirs.
     * @param path This is cheecked path of library or any qt file.
     * @return true if object is qt.
     */
    bool isQt(QString path) const;

    /**
     * @brief getQtVersion This method return information of version of qt
     * @return the masjor version of qt
     */
    QtMajorVersion getQtVersion() const;

    QString toString() const override;
};

#endif // QTDIR_H
