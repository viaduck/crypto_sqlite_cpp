# Copyright (c) 2017-2018 The ViaDuck Project
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
if (NOT TARGET sqlite_modern_cpp)
    set(HUNTER_ENABLED OFF)
    add_subdirectory(external/sqlite_modern_cpp)
endif()

# add tests
add_subdirectory(tests)
