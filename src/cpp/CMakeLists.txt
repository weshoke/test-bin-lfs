# https://nanobind.readthedocs.io/en/latest/api_cmake.html
nanobind_add_module(_bin_lfs
    LTO # Optional flags
    bin_lfs.cpp
)

target_link_libraries(_bin_lfs PRIVATE libdeps)

install(TARGETS _bin_lfs 
    DESTINATION bin_lfs
    COMPONENT Wheel)
