/* A pangram is a sentence that contains every single letter of the alphabet at least once.
For example, the sentence "The quick brown fox jumps over the lazy dog" is a pangram,
because it uses the letters A-Z at least once (case is irrelevant).

Given a string, detect whether or not it is a pangram. Return True if it is, False if not.
Ignore numbers and punctuation. */

#include <stdbool.h>
#include <string.h>

bool is_pangram(const char *str_in) 
{
  int i, j;
  i = 0;
  char *b;
  b = strdup(str_in);
  while (b[i])
    {
        if (b[i] >= 'A' && b[i] <= 'Z')
            b[i] += 32;
        
        i++;
    }
  i = 0;
  int summ = 0;
  while (b[i])
  {
    j = i + 1;
    while (b[j])
     {
      if (b[i] == b[j])
        b[j] = '.';
      j++;
    }
    i++;
  }
  i = 0;
  while (b[i])
    {
    if (b[i] >= 'a' && b[i] <= 'z')
      summ++;
    i++;
  }
  if (summ == 26)
     return(true);
  else
    return(false);
}