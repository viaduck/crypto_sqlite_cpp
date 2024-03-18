# Copyright (c) 2017-2023 The ViaDuck Project
#
# This file is part of CryptoSQLiteCPP.
#
# CryptoSQLiteCPP is free software: you can redistribute it and/or modify
# it under the terms of the GNU Lesser General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# CryptoSQLiteCPP is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU Lesser General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public License
# along with CryptoSQLiteCPP.  If not, see <http://www.gnu.org/licenses/>.
#

cmake_minimum_required(VERSION 3.1...3.27)
project(crypto_sqlite_cpp)

# option
option(CRYPTO_SQLITE_CPP_BUILD_TESTS "Enable test compilation for crypto_sqlite_cpp" OFF)

# set cmake module path
list(INSERT CMAKE_MODULE_PATH 0 "${CMAKE_CURRENT_SOURCE_DIR}/external/crypto_sqlite/external/secure_memory/cmake-modules")

# add target if needed
if (NOT TARGET crypto_sqlite)
    add_subdirectory(external/crypto_sqlite)
endif()

# add target if needed
if (NOT TARGET sqlite_modern_cpp)
    set(HUNTER_ENABLED OFF)
    add_subdirectory(external/sqlite_modern_cpp)
endif()

# add tests
if (CRYPTO_SQLITE_CPP_BUILD_TESTS)
    add_subdirectory(test)
endif()
