cmake_minimum_required(VERSION 3.5)

project(plugin-web-google LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if (UNIX AND NOT APPLE)
    set(LINUX 1)
endif (UNIX AND NOT APPLE)

set(LIB 1)


if (APPLE)
    SET(LIBRARY_OUTPUT_PATH /Users/maohuawei/project/app/qt/doper-dapp/cmake-build-debug/app.app/Contents/MacOS/plugins)
endif (APPLE)


if (UNIX)
    include_directories("/usr/local/include")
    link_directories("/usr/local/lib")
endif (UNIX)


find_package(Qt5 COMPONENTS Core Qml Quick WebEngine REQUIRED)


set(SRC
        src/plugin-web-google_global.h
        src/google.cpp
        src/google.h
        )


set(QRC
        qml.qrc
        image.qrc
        )


add_library(${PROJECT_NAME} SHARED
        ${SRC}
        ${QRC}
        )

target_link_libraries(${PROJECT_NAME} PRIVATE Qt5::Core Qt5::Qml Qt5::Quick Qt5::WebEngine)
target_compile_definitions(${PROJECT_NAME} PRIVATE PLUGINWEBGOOGLE_LIBRARY)
target_link_libraries(${PROJECT_NAME} PRIVATE PluginInterface)
set(pluginconfig.json)