

import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12
import MatsyaUI 1.0 as MatsyaUI
import Matsya.Updator 1.0

Item {
    id: control

    property bool error: false

    Connections {
        target: updator

        function onCheckError(details) {
            control.error = true
            _textArea.text = details
        }
    }

    ColumnLayout {
        anchors.fill: parent
        spacing: MatsyaUI.Units.largeSpacing * 2

        Item {
            Layout.fillHeight: true
        }

        Image {
            width: 64
            height: 64
            sourceSize: Qt.size(width, height)
            source: MatsyaUI.Theme.darkMode ? "qrc:/images/dark/check_failed.svg"
                                                                  : "qrc:/images/light/check_failed.svg"
            Layout.alignment: Qt.AlignHCenter
            visible: control.error
        }

        MatsyaUI.BusyIndicator {
            width: 64
            height: 64
            Layout.alignment: Qt.AlignHCenter
            visible: !control.error
        }

        Label {
            text: qsTr("Checking for updates...")
            Layout.alignment: Qt.AlignHCenter
            visible: !control.error
        }

        Label {
            text: updator.checkProgress + "%"
            Layout.alignment: Qt.AlignHCenter
            color: MatsyaUI.Theme.disabledTextColor
            visible: !control.error
        }

        // Error

        Label {
            text: qsTr("Check for update failure")
            Layout.alignment: Qt.AlignHCenter
            color: MatsyaUI.Theme.disabledTextColor
            visible: control.error
        }

        ScrollView {
            Layout.fillHeight: true
            Layout.fillWidth: true
            visible: _textArea.text != "" && control.error
            clip: true

            TextArea {
                id: _textArea
                enabled: false
                selectByMouse: true

                implicitWidth: 0

                background: Item {
                    Rectangle {
                        anchors.fill: parent
                        anchors.margins: MatsyaUI.Units.smallSpacing
                        anchors.leftMargin: MatsyaUI.Units.largeSpacing
                        anchors.rightMargin: MatsyaUI.Units.largeSpacing
                        radius: MatsyaUI.Theme.smallRadius
                        color: MatsyaUI.Theme.secondBackgroundColor
                    }
                }

                leftPadding: MatsyaUI.Units.largeSpacing * 2
                rightPadding: MatsyaUI.Units.largeSpacing * 2
                topPadding: MatsyaUI.Units.largeSpacing * 2
                bottomPadding: MatsyaUI.Units.largeSpacing * 2

                // Auto scroll to bottom.
                onTextChanged: {
                    _textArea.cursorPosition = _textArea.text.length - 1
                }
            }
        }

        Button {
            text: qsTr("Recheck")
            flat: true
            Layout.alignment: Qt.AlignHCenter
            visible: control.error
            onClicked: {
                control.error = false
                _textArea.clear()
                updator.checkUpdates()
            }
        }

        Item {
            Layout.fillHeight: true
        }
    }
}
