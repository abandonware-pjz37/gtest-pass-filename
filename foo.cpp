#include <gtest/gtest.h>

extern const char* file_name;

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  assert(argc == 2);
  file_name = argv[1];
  return RUN_ALL_TESTS();
}
