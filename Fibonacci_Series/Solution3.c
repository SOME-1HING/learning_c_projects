#include <stdio.h>
#include <conio.h>

int main()
{
  clrscr();

  int n;
  printf("Enter the number of terms: ");
  scanf("%d", &n);

  int first = 0, second = 1, next = 0;

  printf("Fibonacci Series: %d", first);

  if (n > 1)
  {
    printf(", %d", second);
  }

  for (int i = 3; i <= n; i++)
  {
    next = first + second;
    first = second;
    second = next;

    printf(", %d", next);
  }

  getch();

  return 0;
}
