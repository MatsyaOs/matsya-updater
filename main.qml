

import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12
import MatsyaUI 1.0 as MatsyaUI
import Matsya.Updator 1.0

MatsyaUI.Window {
    id: rootWindow
    width: 640
    height: 480
    minimumWidth: 640
    minimumHeight: 480
    maximumWidth: 640
    maximumHeight: 480
    visible: true
    title: qsTr("Software update")

    minimizeButtonVisible: false

    flags: Qt.FramelessWindowHint

    property bool updating: false
    property bool updateSuccess: false

    onClosing: {
        // 关闭保护
        if (rootWindow.updating) {
            close.accepted = false
            return
        }

        close.accepted = true
    }

    DragHandler {
        target: null
        acceptedDevices: PointerDevice.GenericPointer
        grabPermissions: PointerHandler.CanTakeOverFromItems
        onActiveChanged: if (active) { rootWindow.helper.startSystemMove(rootWindow) }
    }

    StackView {
        id: stackView
        anchors.fill: parent
        initialItem: homePage
    }

    Updator {
        id: updator

        onCheckUpdateFinished: {
            stackView.push(updatePage)
        }

        onStartingUpdate: {
            rootWindow.updating = true
            stackView.push(updatingPage)
        }

        onUpdateFinished: {
            rootWindow.updateSuccess = true
            rootWindow.updating = false
            stackView.push(finishedPage)
        }

        onUpdateError: {
            rootWindow.updateSuccess = false
            rootWindow.updating = false
            stackView.push(finishedPage)
        }
    }

    Component {
        id: homePage

        HomePage { }
    }

    Component {
        id: updatePage

        UpdatePage {}
    }

    Component {
        id: updatingPage

        UpdatingPage {}
    }

    Component {
        id: finishedPage

        FinishedPage {}
    }
}
