/* DESCRIPTION:
Array Exchange and Reversing

It's time for some array exchange! The objective is simple: exchange the elements of two arrays
in-place in a way that their new content is also reversed.

# before
my_array = ['a', 'b', 'c']
other_array = [1, 2, 3]

my_array.exchange_with!(other_array)

# after
my_array == [3, 2, 1]
other_array == ['c', 'b', 'a'] */

#include <stdlib.h>
#include <string.h>

void strxchg(char *s1, char *s2)
{
  char *temp;
  temp = malloc(sizeof(char) * strlen(s1) + 1);
  int i;
  int j = strlen(s1) - 1;
  
  i = 0;
  while (j >= 0)
  {
    temp[i] = s1[j];
    i++;
    j--;
  }
  temp[i] = '\0';
  i = 0;
  j = strlen(s2) - 1;
  while (j >= 0)
  {
    s1[i] = s2[j];
    i++;
    j--;
  }
  s1[i] = '\0';
  i = 0;
  while (i <= strlen(temp))
  {
    s2[i] = temp[i];
    i++;
  }
  s2[i] = '\0';
}