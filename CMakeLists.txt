cmake_minimum_required(VERSION 3.1)
project(cryptoSQLitepp)

# add subdirs
if (NOT TARGET gtest)
    add_subdirectory(external/googletest)
endif()

add_subdirectory(external/cryptoSQLite)
add_subdirectory(external/sqlite_modern_cpp)

# add tests
add_subdirectory(tests)