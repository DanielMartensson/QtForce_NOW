#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QtWebEngineQuick/qtwebenginequickglobal.h>

int main(int argc, char *argv[]){
    QGuiApplication app(argc, argv);
    QtWebEngineQuick::initialize();
    QQmlApplicationEngine engine;
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreationFailed, &app,[]() { QCoreApplication::exit(-1); }, Qt::QueuedConnection);
    engine.loadFromModule("QtForce_NOW", "Main");
    return app.exec();
}
