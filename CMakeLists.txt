cmake_minimum_required(VERSION 3.10)
project(DataForge)

# Compiler settings
set(CMAKE_C_COMPILER clang) # Or gcc

# Source files
add_executable(dataforge src/dataforge.c src/utils.c)

# Tests
enable_testing()
add_executable(test_dataforge tests/test_dataforge.c src/utils.c)
add_executable(test_utils tests/test_utils.c src/utils.c)
add_test(NAME test_dataforge COMMAND test_dataforge)
add_test(NAME test_utils COMMAND test_utils)