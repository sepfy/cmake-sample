cmake_minimum_required(VERSION 3.1)
project(app)

file(GLOB APP_SOURCES "*.c")

foreach(sourcefile ${APP_SOURCES})
    string(REPLACE ".c" "" appname ${sourcefile})
    string(REPLACE "${PROJECT_SOURCE_DIR}/" "" appname ${appname})
    add_executable(${appname} ${sourcefile})
endforeach(sourcefile ${APP_SOURCES})

