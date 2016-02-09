cmake_minimum_required(VERSION 2.8)
project(AwesomeApp)
find_package(qibuild)

set(SRCS
  main.cpp
)

qi_create_bin(awesomeapp
  ${SRCS}
)

qi_use_lib(awesomeapp
  libfoo
  libbar
)

