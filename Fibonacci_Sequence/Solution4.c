#include <stdio.h>

int main()
{
  int n;
  int a = 0, b = 1 , c = 1;
   
  printf("Enter the number of terms: ");
  scanf("%d", &n);

  printf("Fibonacci Series: %d", a);

  for (int i = 3; i <= n+1; i++)
  {
    printf(", %d", c);
    c = a + b;
    a = b;
    b = c;
  }
  return 0;
}
