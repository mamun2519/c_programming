#include <stdio.h>

int main()
{
      int number;
      printf("Enter Your Number");
      scanf("%d", &number);
      if (number > 99 && number < 1000)
      {
            printf("This Is three degit number");
      }
      else
      {
            printf("This Is not three degit number");
      }
      return 0;
}