#ifndef CRYPTOSQLITEPP_BASICTEST_H
#define CRYPTOSQLITEPP_BASICTEST_H


#include <gtest/gtest.h>

class BasicTest : public ::testing::Test {
    virtual void SetUp() override {
        std::remove("test.db");
        std::remove("test.db.keyfile");
    }
};


#endif //CRYPTOSQLITEPP_BASICTEST_H
