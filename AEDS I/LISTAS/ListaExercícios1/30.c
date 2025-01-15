#include <stdio.h>

int main(void) {
  int x, y, z, a, b, c;
  scanf("%d%d%d", &x, &y, &z);

  if (x > y && x > z) {
    a = x;
    if (y > z) {
      b = y;
      c = z;
    } else {
      b = z;
      c = y;
    }
  } else if (y > x && y > z) {
    a = y;
    if (x > z) {
      b = x;
      c = z;
    } else {
      c = x;
      b = z;
    }
  } else if (z > x && z > y) {
    a = z;
    if (x > y) {
      b = x;
      c = y;
    } else {
      b = y;
      c = x;
    }
  }
  printf("%d %d %d", c, b, a);
  return 0;
}