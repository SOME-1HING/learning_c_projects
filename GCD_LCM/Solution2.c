#include <stdio.h>
#include <conio.h>

int main()
{
  int a, b, gcd, lcm, x, y;

  clrscr();

  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);
  x = a, y = b;
  while (x != y)
  {
    if (x > y)
    {
      x -= y;
    }
    else
    {
      y -= x;
    }
  }
  gcd = x;
  lcm = (a * b) / gcd;

  printf("GCD of %d and %d = %d\n", a, b, gcd);
  printf("LCM of %d and %d = %d\n", a, b, lcm);

  getch();

  return 0;
}