cmake_minimum_required(VERSION 2.8)
project(AwesomeApp)

set(SRCS
  main.cpp
)

include(CMakeParseArguments)

function(add_import_search_dir library target)
   
endfunction()

function(import library)
  if(NOT TARGET ${library})
    add_subdirectory("../${library}" "${CMAKE_BINARY_DIR}/${library}")
  endif() 
endfunction()

function(myscript_link_libraries target)
  message(STATUS "myscript_link_libraries")
  cmake_parse_arguments(ARG "" "" "DEPENDS" ${ARGN})
  foreach(depend ${ARG_DEPENDS})
    import(${depend})
    target_include_directories(${target} PUBLIC "../${depend}")
    target_link_libraries(${target} ${depend})
    message(STATUS "link with ../${depend}")
  endforeach()
endfunction()

add_executable(awesomeapp
  ${SRCS}
)

myscript_link_libraries(awesomeapp
  DEPENDS
    libfoo
    libbar
)

