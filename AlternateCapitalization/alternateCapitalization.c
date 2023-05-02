/* DESCRIPTION:
Given a string, capitalize the letters that occupy even indexes and odd indexes 
separately, and return as shown below. Index 0 will be considered even.

For example, capitalize("abcdef") = ['AbCdEf', 'aBcDeF']. See test cases for more examples.

The input will be a lowercase string with no spaces. */

#include <stdlib.h>
#include <string.h>

char **capitalize(const char *test_str) 
{
  int i;
  int j;
  char **arr;
  
  arr = (char **)malloc(sizeof(char *) * 2 + 1);
  arr[0] = (char *)malloc(sizeof(char) *strlen(test_str) + 1);
  arr[1] = (char *)malloc(sizeof(char) *strlen(test_str) + 1);
  i = 0;
  j = 0;
  while (test_str[i])
  {
    if(i % 2 == 0)
      arr[0][j++] = test_str[i] - 32;
    else
      arr[0][j++] = test_str[i];
    i++;
  }
  arr[0][j] = '\0';
  i = 0;
  j = 0;
  while (test_str[i])
  {
    if(i % 2 != 0)
      arr[1][j++] = test_str[i] - 32;
    else
      arr[1][j++] = test_str[i];
    i++;
  }
  arr[1][j] = '\0';
  arr[2] = NULL;
  return (arr);
}