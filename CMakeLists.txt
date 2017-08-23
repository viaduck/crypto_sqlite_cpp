cmake_minimum_required(VERSION 3.1)
project(cryptoSQLitepp)

# enable and require c++14 support
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# add target if needed
if (NOT TARGET cryptosqlite)
    add_subdirectory(external/cryptoSQLite)
endif()

# add target if needed
if (NOT TARGET SQLiteModernCPP)
    add_subdirectory(external/sqlite_modern_cpp)
endif()

# add tests
add_subdirectory(tests)