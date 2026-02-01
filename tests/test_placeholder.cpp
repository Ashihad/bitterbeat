#include <gtest/gtest.h>


class PlaceholderTests : public testing::Test {
  void SetUp() override { std::srand(static_cast<unsigned>(std::time(0))); }
};
