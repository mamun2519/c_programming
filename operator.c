#include <stdio.h>

int main()
{
      int x, y, z;
      x = 5;
      y = 10;
      z = 5;
      int total = x + y + z;
      int result = total - x;
      int count = result / 2;
      printf("%d\n", total);
      printf("%d\n", result);
      printf("%d", count);
      return 0;
}