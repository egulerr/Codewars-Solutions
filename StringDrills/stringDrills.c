/* DESCRIPTION:
Write a function named repeater() that takes two arguments (a string and a number), and 
returns a new string where the input string is repeated that many times.

Example: (Input1, Input2 --> Output)
"a", 5 --> "aaaaa" */

#include <stdlib.h>
#include <string.h>

char* repeater(const char* strin, int n) 
{
  int i;
  int j;
  char *arr;
  
  arr = (char *)malloc(sizeof(char) * (strlen(strin)) * 100 + 1);
  i = 0;
  j = 0;
  while (i < (strlen(strin) * n))
  {
    arr[i] = strin[j];
    i++;
    j++;
    if (j == strlen(strin))
      j = 0;
  }
  arr[i] = '\0';
  return (arr);
}