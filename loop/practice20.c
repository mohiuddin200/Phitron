#include <stdio.h>

int main()
{
  int sum = 0;
  for (int i = 5; i <= 50; i++)
  {
    sum += i;
  }
  printf("Total sum of 5 to 50: %d", sum);
}