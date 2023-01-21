/*
 * Copyright (C) 2017-2018 The ViaDuck Project
 *
 * This file is part of CryptoSQLiteCPP.
 *
 * CryptoSQLiteCPP is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * CryptoSQLiteCPP is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with CryptoSQLiteCPP.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef CRYPTOSQLITECPP_BASICTEST_H
#define CRYPTOSQLITECPP_BASICTEST_H

#include <gtest/gtest.h>

class BasicTest : public ::testing::Test {
    void SetUp() override {
        std::remove("test.db");
        std::remove("test.db.keyfile");
    }
};

#endif //CRYPTOSQLITECPP_BASICTEST_H
