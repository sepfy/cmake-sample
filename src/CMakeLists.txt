cmake_minimum_required(VERSION 3.1)
project(samples)
add_subdirectory(func)
add_subdirectory(app)


add_executable(main main.c)
# Install target
install(TARGETS main
    DESTINATION ${CMAKE_INSTALL_PREFIX}/bin/
)


# Link libraries
include_directories(${func_SOURCE_DIR}/)
add_executable(main_func main_func.c)
target_link_libraries(main_func func pthread)

# Execute command
execute_process(COMMAND echo -e "\\033[0;33mHello command\\033[0m")
