#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
  char s[100];
  bool flag = false;
  int i = 0;

  printf("Enter a string: ");

  // gets(s);
  scanf("%[^\n]s", s);

  int j = strlen(s) - 1;

  while (i <= j)
  {
    if (s[i] != s[j])
      flag = true;

    i++, j--;
  }

  flag ? printf("%s is not a palindrome.", s) : printf("%s is a palindrome.", s);

  return 0;
}
