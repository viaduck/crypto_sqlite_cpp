#include "BasicTest.h"
#include "sqlite_modern_cpp.h"

TEST_F(BasicTest, testOpenDB) {
    sqlite::database db("main.db");

    db << "create table 'test' (id INTEGER PRIMARY KEY, name TEXT);";

    db << "insert into test VALUES (?, ?)"
       << 1
       << "hans";
}