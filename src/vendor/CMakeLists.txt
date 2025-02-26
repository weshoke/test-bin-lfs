add_subdirectory(nanobind)

add_library(libdeps INTERFACE)
target_link_libraries(libdeps INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}/deps/libdeps.a
)
