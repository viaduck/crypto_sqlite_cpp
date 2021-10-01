# Copyright (c) 2017-2021 The ViaDuck Project
#
# This file is part of cryptoSQLitepp.
#
# cryptoSQLitepp is free software: you can redistribute it and/or modify
# it under the terms of the GNU Lesser General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# cryptoSQLitepp is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU Lesser General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public License
# along with cryptoSQLitepp.  If not, see <http://www.gnu.org/licenses/>.
#

include(FindOrBuildGTest)

if (GTEST_FOUND)
    # collect test files
    file(GLOB_RECURSE CSP_TEST_FILES ${CMAKE_CURRENT_SOURCE_DIR}/*)

    # include gtest
    include_directories(${GTEST_INCLUDE_DIRS})

    # set up exec target
    add_executable(CryptoSQLitepp_Test ${CSP_TEST_FILES})

    # require and enable c++14 support
    set_target_properties(CryptoSQLitepp_Test PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED YES)

    # link against google test, cryptoSQLite and sqlite_modern_cpp
    target_link_libraries(CryptoSQLitepp_Test ${GTEST_BOTH_LIBRARIES} cryptosqlite sqlite_modern_cpp)
    if (NOT ANDROID)
        target_link_libraries(CryptoSQLitepp_Test pthread)
    endif()
endif()
