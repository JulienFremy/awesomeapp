cmake_minimum_required(VERSION 2.8)
project(AwesomeApp)

set(SRCS
  main.cpp
)

add_executable(awesomeapp
  ${SRCS}
)

target_link_libraries(awesomeapp
  libfoo
  libbar
)

