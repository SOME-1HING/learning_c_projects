#include <stdio.h>
#include <conio.h>

int main()
{
  char ch;

  clrscr();

  printf("Enter any character: ");
  scanf("%c", &ch);

  if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    printf("'%c' is alphabet.", ch);

  else if (ch >= '0' && ch <= '9')
    printf("'%c' is digit.", ch);

  else
    printf("'%c' is special character.", ch);

  getch();

  return 0;
}