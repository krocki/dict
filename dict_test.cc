#include "dict.h"

struct some_type {
  int v;
  char str[16];
};

int main(int argc, char **argv) {

  Dict<struct some_type> d;

  d["key0"] = { 0, "val0" };
  d["key1"] = { 1, "val1" };

  auto i = d["key1"];
  printf("%d, %s\n", i.v, i.str);

  return 0;
}
