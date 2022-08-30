#include <stdio.h>

void add(int* ptr) {
  (*ptr)++; // adding 1 to *ptr
}

int main()
{
  int* p, i = 10;
  p = &i;
  add(p);

  printf("%d", *p);
  return 0;
}
