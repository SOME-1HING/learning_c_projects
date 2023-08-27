#include <stdio.h>
#include <conio.h>

int main()
{
  clrscr();

  int n;
  printf("Enter the number of terms: ");
  scanf("%d", &n);

  int arr[n];
  arr[0] = 0;
  arr[1] = 1;

  for (int i = 2; i < n; i++)
  {
    arr[i] = arr[i - 1] + arr[i - 2];
  }

  printf("Fibonacci Series: ");
  for (int j = 0; j < n; j++)
  {
    printf("%d", arr[j]);
    if (j != n - 1)
    {
      printf(", ");
    }
  }

  getch();

  return 0;
}
