// Copyright (c) 2013-2018 LG Electronics, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// SPDX-License-Identifier: Apache-2.0

#ifndef FPSCOUNTERPLUGIN_H
#define FPSCOUNTERPLUGIN_H

#include <QQmlExtensionPlugin>
#include <QQmlEngine>
    /*!
     * \class FpsCounterPlugin
     * \brief Provides all registered services in a plugin.
     *
     * The services are registered in the \a registerTypes() method.
     *
     * \see FpsCounter
     */

class FpsCounterPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "com.palm.fpscounter" FILE
    "fpscounterplugindescription.json")

public:
    /*!
     * \brief Registers the classes for usage in Qt Quick.
     *
     * All properties, invokable methods, signals and slots
     * of the registered classes can be accessed via QML.
     */
    void registerTypes(const char *uri);

};
#endif // FPSCOUNTERPLUGIN_H
