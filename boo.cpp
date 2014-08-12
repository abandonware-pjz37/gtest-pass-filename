#include <gtest/gtest.h>

const char* file_name;

TEST(Foo, Boo) {
  std::cout << "file:" << file_name << std::endl;
}
