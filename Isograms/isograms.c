/* DESCRIPTION:
An isogram is a word that has no repeating letters, consecutive or non-consecutive. 
Implement a function that determines whether a string that contains only letters is 
an isogram. Assume the empty string is an isogram. Ignore letter case.

Example: (Input --> Output)

"Dermatoglyphics" --> true "aba" --> false "moOse" --> false (ignore letter case)

isIsogram "Dermatoglyphics" = true
isIsogram "moose" = false
isIsogram "aba" = false */

#include <stdbool.h>

bool IsIsogram (const char *string) 
{
  int i;
  int j;
  
  i = 0;
  j = 0;
  while(string[i])
  {
    j = 1;
    while(string[i + j])
    {
      if(string[i] == string[i + j] || string[i] == (string[i + j] + 32) || (string[i] == string[i + j] - 32))
        return (false);
      j++;
    }
    i++;
  }
  return (true);
}