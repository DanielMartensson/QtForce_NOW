import QtQuick
import QtWebEngine
import QtQuick.Controls

ApplicationWindow {
    visible: true
    width: 800
    height: 640
    title: qsTr("QtForce NOW")

    WebEngineView {
        id: webView
        anchors.fill: parent
        url: "https://play.geforcenow.com/"
    }
}
