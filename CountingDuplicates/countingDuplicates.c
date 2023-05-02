/* DESCRIPTION:
Count the number of Duplicates
Write a function that will return the count of distinct case-insensitive alphabetic 
characters and numeric digits that occur more than once in the input string.
The input string can be assumed to contain only alphabets (both uppercase and lowercase) and numeric digits.

Example
"abcde" -> 0 # no characters repeats more than once
"aabbcde" -> 2 # 'a' and 'b'
"aabBcde" -> 2 # 'a' occurs twice and 'b' twice (`b` and `B`)
"indivisibility" -> 1 # 'i' occurs six times
"Indivisibilities" -> 2 # 'i' occurs seven times and 's' occurs twice
"aA11" -> 2 # 'a' and '1'
"ABBA" -> 2 # 'A' and 'B' each occur twice */

#include <stdio.h>
#include <stdlib.h>
void lower(char *arr)
{
    int i;
  
    i = 0;
    while (arr[i])
    {
        if (arr[i] >= 65 && arr[i] <= 90)
            arr[i] += 32;
        i++;
    }
}

int check (char *str, char c, int k)
{
    int    i;

    i = 0;
    while (i < k)
    {
        if (str[i] == c)
            return (0);
        i++;
    }
    return (1);
}
#include <string.h>
size_t duplicate_count(const char *text)
{
  char *str;
  char *arr =  strdup(text);
  str = (char *)malloc(sizeof(char) * 100);
  int i;
  int j;
  int k = 0;
  lower(arr);

  i = 0;
  while (arr[i])
  {
      j = i + 1;
      while (arr[j])
      {
          if (arr[i] == arr[j])
          {
              if (check(arr, arr[i], i))
              {
                  str[k] = arr[i];
                k++;
                break;
              }
          }
          j++;
      }
      i++;
  }
  str[k] = '\0';
  return ((strlen(str)));
}