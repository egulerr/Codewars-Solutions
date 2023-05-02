/* DESCRIPTION:
Task
Given a string str, reverse it and omit all non-alphabetic characters.

Example
For str = "krishan", the output should be "nahsirk".

For str = "ultr53o?n", the output should be "nortlu".

Input/Output
[input] string str
A string consists of lowercase latin letters, digits and symbols.

[output] a string */

#include <string.h>
char *reverse_letter(const char *str)
{
  int i;
  int len;
  char *arr;
  
  arr = (char *)malloc(sizeof(char) * 1000);
  len = strlen(str);
  i = 0;
  while (len >= 0)
  {
    if ((str[len - 1] >= 65 && str[len - 1] <= 90) || str[len - 1] >= 97 && str[len - 1] <= 122)
      {
      arr[i] = str[len - 1];
      i++;
    }
    len--;
  }
  arr[i] = '\0';
  return (arr);
}