# collect test files
file(GLOB_RECURSE CSP_TEST_FILES ${CMAKE_CURRENT_SOURCE_DIR}/*)

# enable and require c++14 support
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# set up exec target
add_executable(CryptoSQLiteppTests ${CSP_TEST_FILES})

# link against google test, cryptoSQLite and sqlite_modern_cpp
target_link_libraries(CryptoSQLiteppTests gtest_main cryptosqlite SQLiteModernCPP)