#include <stdio.h>

int main()
{
      int ram, shyam, ajay;
      printf(" Enter Ram Age");
      scanf("%d", &ram);
      printf(" Enter shyam Age");
      scanf("%d", &shyam);
      printf(" Enter shyam ajay");
      scanf("%d", &ajay);
      if (ram < shyam && ram < ajay)
      {
            printf("%d Ram Is Yougester", ram);
      }
      else if (shyam < ram && shyam < ajay)
      {
            printf("%d shyam Is Yougester", ajay);
      }
      else
      {
            printf("%d shyam Is Yougester", shyam);
      }
}