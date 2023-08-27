#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

char *createArrayFromString()
{
  char input[100];
  printf("Enter something to check: ");
  scanf("%99[^\n]", input);

  int length = strlen(input);

  char *dynamicArray = (char *)malloc((length + 1) * sizeof(char));
  if (dynamicArray == NULL)
  {
    printf("Memory allocation failed.\n");
    return NULL;
  }

  strcpy(dynamicArray, input);

  return dynamicArray;
}

int isPalindrome(char *arr)
{
  for (int i = 0, j = arrLength(arr) - 1; i < arrLength(arr); i++, j--)
  {
    if (arr[i] != arr[j])
    {
      return 0;
    }
  }
  return 1;
}

int main()
{

  char *resultArray = createArrayFromString();

  if (isPalindrome(resultArray))
  {
    printf("%s is a palindrome.", resultArray);
  }

  else
  {
    printf("%s is not a palindrome.", resultArray);
  }

  return 0;
}
