#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
  char str[100];
  char ch;
  int n, i;

  clrscr();

  printf("Enter a string: ");
  scanf("%s", str);

  n = strlen(str) - 1;

  printf("Uppercase: ");

  for (i = 0; i <= n; i++)
  {
    ch = str[i];

    if (ch >= 'a' && ch <= 'z')
      printf("%c", ch - 32);
    else
      printf("%c", ch);
  }

  getch();

  return 0;
}