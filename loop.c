#include <stdio.h>
//
int main()
{
      int number;
      printf("Enter Number: ");
      scanf("%d", &number);
      for (int i = 2; i <= number - 1; i++)
      {
            if (number % i == 0)
            {
                  printf("This number is copmosite");
                  break;
            }
      }

      return 0;
}