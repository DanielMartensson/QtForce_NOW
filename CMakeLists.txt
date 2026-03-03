cmake_minimum_required(VERSION 3.16)

project(QtForce_NOW VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Quick)
find_package(Qt6Positioning)
find_package(Qt6WebEngineCore)
find_package(Qt6WebEngineQuick)

qt_standard_project_setup(REQUIRES 6.8)

qt_add_executable(appQtForce_NOW
    main.cpp
)

qt_add_qml_module(appQtForce_NOW
    URI QtForce_NOW
    QML_FILES
        Main.qml
)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(appQtForce_NOW PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.appQtForce_NOW
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appQtForce_NOW
    PRIVATE Qt6::Quick
            Qt6::WebEngineQuick
)

include(GNUInstallDirs)
install(TARGETS appQtForce_NOW
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
