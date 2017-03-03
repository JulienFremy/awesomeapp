cmake_minimum_required(VERSION 2.8)
project(AwesomeApp)

set(SRCS
  main.cpp
)

#function(import library)
#  if(NOT TARGET ${library})
#    add_subdirectory("../${library}" "${CMAKE_BINARY_DIR}/${library}")
#  endif() 
#endfunction()

#function(myscript_link_libraries target)
#  message(STATUS "myscript_link_libraries")
#  cmake_parse_arguments(ARG "" "" "DEPENDS" ${ARGN})
#  foreach(depend ${ARG_DEPENDS})
#    import(${depend})
#    target_include_directories(${target} PUBLIC "../${depend}")
#    target_link_libraries(${target} ${depend})
#    message(STATUS "link with ../${depend}")
#  endforeach()
#endfunction()

add_executable(awesomeapp
  ${SRCS}
)

find_package(LibFoo)
find_package(LibBar)

target_include_directories(awesomeapp
  PUBLIC ${LibFoo_INCLUDE_DIRS}
  PUBLIC ${LibBar_INCLUDE_DIRS}
)

target_link_libraries(awesomeapp
  ${LibFoo_LIBRARIES}
  ${LibBar_LIBRARIES}
)

#myscript_link_libraries(awesomeapp
#  DEPENDS
#    libfoo
#    libbar
#)
#
