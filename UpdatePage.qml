
import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12
import MatsyaUI 1.0 as MatsyaUI
import Matsya.Updator 1.0

Item {
    id: control

//    Image {
//        anchors.top: parent.top
//        anchors.horizontalCenter: parent.horizontalCenter
//        width: 167
//        height: 26
//        sourceSize: Qt.size(500, 76)
//        source: MatsyaUI.Theme.darkMode ? "qrc:/images/dark/logo.png"
                                                      : "qrc:/images/light/logo.png"
//        asynchronous: true
//        visible: !_listView.visible
//    }

    ColumnLayout {
        anchors.fill: parent

        Item {
            Layout.fillHeight: !_listView.visible
        }

        // 插画
        Image {
            Layout.preferredWidth: 143
            Layout.preferredHeight: 172
            source: MatsyaUI.Theme.darkMode ? "qrc:/images/dark/done.svg"
                                                                  : "qrc:/images/light/done.svg"
            sourceSize: Qt.size(143, 172)
            Layout.alignment: Qt.AlignHCenter
            asynchronous: true
            visible: !_listView.visible
        }

        Item {
            height: MatsyaUI.Units.largeSpacing * 2
            visible: !_listView.visible
        }

        Label {
            text: "<b>" + qsTr("Package updates are available") + "</b>"
            visible: _listView.count !== 0
            Layout.alignment: Qt.AlignHCenter
        }

        Label {
            text: "<b>" + qsTr("Your system is up to date") + "</b>"
            visible: _listView.count === 0
            Layout.alignment: Qt.AlignHCenter
        }

        Label {
            text: qsTr("Current Version: %1").arg(updator.version)
            Layout.alignment: Qt.AlignHCenter
        }

        Item {
            Layout.fillHeight: !_listView.visible
        }

        Item {
            height: MatsyaUI.Units.smallSpacing
            visible: _listView.visible
        }

        ListView {
            id: _listView
            model: upgradeableModel

            visible: _listView.count !== 0
            spacing: MatsyaUI.Units.largeSpacing
            clip: true

            ScrollBar.vertical: ScrollBar {}

            Layout.fillWidth: true
            Layout.fillHeight: true

            delegate: Item {
                width: ListView.view.width
                height: 50

                Rectangle {
                    anchors.fill: parent
                    anchors.leftMargin: MatsyaUI.Units.largeSpacing
                    anchors.rightMargin: MatsyaUI.Units.largeSpacing
                    color: MatsyaUI.Theme.secondBackgroundColor
                    radius: MatsyaUI.Theme.mediumRadius
                }

                RowLayout {
                    anchors.fill: parent
                    anchors.leftMargin: MatsyaUI.Units.largeSpacing * 1.5
                    anchors.rightMargin: MatsyaUI.Units.largeSpacing * 1.5
                    spacing: MatsyaUI.Units.smallSpacing

                    Image {
                        height: 32
                        width: 32
                        sourceSize: Qt.size(width, height)
                        source: "image://icontheme/" + model.name
                        smooth: true
                        antialiasing: true
                    }

                    // Name and version
                    Item {
                        Layout.fillWidth: true
                        Layout.fillHeight: true

                        ColumnLayout {
                            anchors.fill: parent
                            spacing: 0

                            Item {
                                Layout.fillHeight: true
                            }

                            Label {
                                text: model.name
                                Layout.fillWidth: true
                            }

                            Label {
                                text: model.version
                                color: MatsyaUI.Theme.disabledTextColor
                            }

                            Item {
                                Layout.fillHeight: true
                            }
                        }
                    }

                    // Size
                    Label {
                        text: model.downloadSize
                        color: MatsyaUI.Theme.disabledTextColor
                    }
                }
            }
        }

        Item {
            height: MatsyaUI.Units.smallSpacing
        }

        Button {
            text: qsTr("Update now")
            Layout.alignment: Qt.AlignHCenter
            visible: _listView.count !== 0
            flat: true
            onClicked: updator.upgrade()
        }

        Item {
            height: MatsyaUI.Units.largeSpacing
        }
    }
}
