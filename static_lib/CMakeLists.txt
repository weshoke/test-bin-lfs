# Collect all source files in the current directory
file(GLOB_RECURSE SOURCES "*.cpp" "*.c")

# Create a static library
add_library(deps STATIC ${SOURCES} ${HEADERS})
