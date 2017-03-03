option(build_awesomeapp "Build awesomeapp" FALSE)
if(${build_awesomeapp})
  # import rewrite, need to make this a function, but I'm prototyping here...
  if(NOT TARGET awesomeapp)
    add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/awesomeapp" "${CMAKE_BINARY_DIR}/awesomeapp")
  endif()
endif()
