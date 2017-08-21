#include <cryptosqlite/encryption/PlaintextCrypt.h>
#include "BasicTest.h"
#include "cryptosqlite/cryptosqlite.h"
#include "cryptosqlite/Codec.h"
#include "sqlite_modern_cpp/cryptosqlitepp.h"

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