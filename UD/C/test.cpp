#include "A/index.h"
#include "B/lib.h"
#include "gtest/gtest.h"

TEST(test_A, test) {
    ASSERT_EQ(BuildSys::sum(12, 8), 20);
    ASSERT_EQ(BuildSys::sum(-10, 10), 0);
    ASSERT_EQ(BuildSys::sum(1000000, 1000000), 2000000);
}

TEST(test_B, test) {
    ASSERT_EQ(BuildSys::sub(189, 189), 0);
    ASSERT_EQ(BuildSys::sub(500, -500), 1000);
    ASSERT_EQ(BuildSys::sub(14, 13), 1);
}

