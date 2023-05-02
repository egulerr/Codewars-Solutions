/* DESCRIPTION:
Step 1: Create a function called encode() to replace all the lowercase vowels in a given string with numbers according to the following pattern:

a -> 1
e -> 2
i -> 3
o -> 4
u -> 5
For example, encode("hello") would return "h2ll4". There is no need to worry about uppercase vowels in this kata.

Step 2: Now create a function called decode() to turn the numbers back into vowels according to the same pattern shown above.

For example, decode("h3 th2r2") would return "hi there".

For the sake of simplicity, you can assume that any numbers passed into the function will correspond to vowels. */

#include <string.h>

char *encode(const char *string) {
  char *arr;
  int j;

  arr = (char *)malloc(sizeof(char) * strlen(string) + 1);
  if (!arr)
    return (NULL);
  j = 0;
  while (string[j])
  {
    if (string[j] == 'a')
      arr[j] = '1';
    else if (string[j] == 'e')
      arr[j] = '2';
    else if (string[j] == 'i')
      arr[j] = '3';
    else if (string[j] == 'o')
      arr[j] = '4';
    else if (string[j] == 'u')
      arr[j] = '5';
    else
      arr[j] = string[j];
	j++;
  }
  arr[j] = '\0';
  return (arr);
}

char *decode(const char *string)
{
  char *arr;
  int j;

  arr = (char *)malloc(sizeof(char) * strlen(string) + 1);
  if (!arr)
    return (NULL);
  j = 0;
  while (string[j])
  {
    if (string[j] == '1')
      arr[j] = 'a';
    else if (string[j] == '2')
      arr[j] = 'e';
    else if (string[j] == '3')
      arr[j] = 'i';
    else if (string[j] == '4')
      arr[j] = 'o';
    else if (string[j] == '5')
      arr[j] = 'u';
    else
      arr[j] = string[j];
	j++;
  }
  arr[j] = '\0';
  return (arr);
}