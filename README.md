# cryptoSQLitepp
Combines `cryptoSQLite` and `sqlite_modern_cpp` into one CMakeLists. Allows
the comfortable usage of SQLite3 using `sqlite_modern_cpp` with the addition of 
encryption using `cryptoSQLite`.

## Features
* `cryptoSQLite` encryption features
* `sqlite_modern_cpp` usage features

## Setup
1. Initialize Git submodules: `git submodule update --init --recursive`
2. Link against the `cryptosqlite` and `sqlite_modern_cpp` CMake library targets.
3. Implement `IDataCrypt` per `cryptoSQLite` instructions.

## Usage
See [BasicTest.cpp](tests/BasicTest.cpp) for a usage example.

## Combined Projects
* [sqlite_modern_cpp](https://github.com/viaduck/sqlite_modern_cpp):
Modern SQLite3 wrapper
* [cryptoSQLite](https://github.com/viaduck/cryptoSQLite): SQLite3 encryption

## Licensing
This library is subject to the GNU Lesser General Public License v3.0 (GNU
LGPLv3).

```
Copyright (C) 2017-2018  The ViaDuck Project

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
```
