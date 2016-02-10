cmake_minimum_required(VERSION 2.8)
project(AwesomeApp)
find_package(qibuild)
include("qibuild/modules/qt5-tools")

set(SRCS
  main.cpp
  mainwindow.hpp
  mainwindow.cpp
)

qi_create_bin(awesomeapp
  ${SRCS}
)

qi_use_lib(awesomeapp
  libfoo
  libbar
  Qt5_Core
  Qt5_Gui
  Qt5_Widgets
)

