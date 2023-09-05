#include <stdio.h>

int main()
{
  int n, i = 1, fac = 1;

  printf("Enter a number to get its factorial: ");
  scanf("%d", &n);

  while (i <= n)
  {
    fac *= i;
    i++;
  }

  printf("Factorial of %d is %d.", n, fac);
  
  return 0;
}