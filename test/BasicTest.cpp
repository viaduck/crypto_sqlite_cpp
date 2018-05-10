/*
 * Copyright (C) 2017-2018 The ViaDuck Project
 *
 * This file is part of cryptoSQLitepp.
 *
 * cryptoSQLitepp is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * cryptoSQLitepp is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with cryptoSQLitepp.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <cryptosqlite/encryption/PlaintextCrypt.h>
#include <cryptosqlite/cryptosqlite.h>
#include <cryptosqlite/Codec.h>
#include <sqlite_modern_cpp/cryptosqlite.h>
#include "BasicTest.h"

TEST_F(BasicTest, testOpenDB) {
    Codec::setCryptoFactory([] (std::unique_ptr<IDataCrypt> &crypt) {
        crypt.reset(new PlaintextCrypt());
    });

    sqlite::cryptosqlite_config config;
    config.key = "asdfkej19291";
    sqlite::cryptosqlite_database db("test.db", config);

    db << "create table 'test' (id INTEGER PRIMARY KEY, name TEXT);";

    db << "insert into test VALUES (?, ?)"
       << 1
       << "hans";
}
