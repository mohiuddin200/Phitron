#include <stdio.h>

int main()
{
  int n;
  printf("Enter a Natural Numbers: ");
  scanf("%d", &n);

  int sum = 0;

  for (int i = 1; i <= n; i++)
  {
    sum += i;
  }

  printf("\nSum = %d\n", sum);
  return 0;
}