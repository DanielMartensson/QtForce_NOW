import QtQuick
import QtWebEngine
import QtQuick.Controls

ApplicationWindow {
    width: 640
    height: 480
    visible: true
    title: qsTr("QtForce NOW")

    WebEngineView {
        id: webView
        anchors.fill: parent
        url: "https://play.geforcenow.com/"
    }
}
