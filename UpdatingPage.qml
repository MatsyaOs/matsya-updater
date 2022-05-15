

import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12
import MatsyaUI 1.0 as MatsyaUI
import Matsya.Updator 1.0

Item {
    id: control

    ColumnLayout {
        anchors.fill: parent

        MatsyaUI.BusyIndicator {
            width: 32
            height: 32
            Layout.alignment: Qt.AlignHCenter
        }

        Item {
            height: MatsyaUI.Units.smallSpacing
        }

        Label {
            text: qsTr("Updating, please wait")
            Layout.alignment: Qt.AlignHCenter
        }

        ScrollView {
            Layout.fillHeight: true
            Layout.fillWidth: true
            clip: true

            TextArea {
                id: _textArea
                text: updator.statusDetails
                enabled: false

                background: Item {
                    Rectangle {
                        anchors.fill: parent
                        anchors.margins: MatsyaUI.Units.largeSpacing
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
    }
}
