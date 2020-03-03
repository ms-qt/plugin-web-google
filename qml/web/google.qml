import QtQuick 2.0
import QtQuick.Window 2.0
import QtWebEngine 1.7
import QtQuick.Controls 2.4
import QtQuick.Layouts 1.11
import QtWebChannel 1.0

Item {
    visible: true
    width: parent.width
    height: parent.height


    WebEngineView {
        id: webEngineView
        // 网页路径
        url: "https://www.google.com"
        anchors.fill: parent
        settings.pluginsEnabled: true
        settings.screenCaptureEnabled: true
        //AllowRunningInsecureContent
        settings.allowRunningInsecureContent: true

        settings.javascriptEnabled: true
        onJavaScriptConsoleMessage: {
            console.log(message)
        }

        onFeaturePermissionRequested: {

            if(feature  == WebEngineView.MediaAudioCapture
                    || feature == WebEngineView.MediaAudioVideoCapture
                    || feature ==  WebEngineView.MediaVideoCapture){

                grantFeaturePermission(securityOrigin,feature,true)

            } else{
                grantFeaturePermission(securityOrigin,feature,false)

            }
        }
    }
}
