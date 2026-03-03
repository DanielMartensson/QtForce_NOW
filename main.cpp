#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QtWebEngineQuick/qtwebenginequickglobal.h>

int main(int argc, char *argv[]){
    /* QCore Application settings */
    QCoreApplication::setApplicationName("QtForce NOW Browser");
    QCoreApplication::setOrganizationName("QtForce NOW Project");

    /* GPU API */
#ifdef USE_OPEN_GL_ES
    QCoreApplication::setAttribute(Qt::AA_UseOpenGLES);
#else
    QCoreApplication::setAttribute(Qt::AA_UseDesktopOpenGL);
#endif

    /* Start Qt WebEngine */
    QtWebEngineQuick::initialize();

    /* Start GUI */
    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreationFailed, &app,[]() { QCoreApplication::exit(-1); }, Qt::QueuedConnection);
    engine.loadFromModule("QtForce_NOW", "Main");
    return app.exec();
}
