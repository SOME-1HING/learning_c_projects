#include <stdio.h>

int arrLength(char arr[])
{
  int count = 0;
  char *ptr = arr;
  while (*ptr != '\0')
  {
    count++;
    ptr++;
  }
  return count;
}

int strToInt(char arr[])
{
  int i;
  scanf(arr, "%d", &i);
  return i;
}

int isArmstrong()
{
  char num[50];
  int sum = 0;

  printf("Enter a number to check: ");
  scanf("%s", num);

  char *ptr = num;
  int length = arrLength(num);

  while (*ptr != '\0')
  {
    int x = 1;
    for (int i = 0; i < length; i++)
    {
      x *= (*ptr - '0');
    }
    sum += x;
    ptr++;
  }
  printf("%d ", strToInt(num));
  return sum == strToInt(num);
}

int main()
{
  if (isArmstrong())
  {
    printf("is a armstrong number.");
  }
  else
  {
    printf("is a not armstrong number.");
  }
  return 0;
}
