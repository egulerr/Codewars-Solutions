/* DESCRIPTION:
Write a function to convert a name into initials. This kata strictly takes two words 
with one space in between them.
The output should be two capital letters with a dot separating them.

It should look like this:
Sam Harris => S.H
patrick feeney => P.F */

#include <ctype.h>
char *get_initials (const char *full_name, char initials[4])
{
  int i;
  int j;

  j = 0;
  i = 0;
  initials[0] = full_name[0];
  if (initials[0] >= 97 && initials[0] <= 122)
    initials[0] -= 32;
  initials[1] = '.';
  i = 0;
  while (full_name[i] != 32)
  {
	  i++;
  }
  i++;
  initials[2] = full_name[i];
  if (initials[2] >= 97 && initials[2] <= 122)
    initials[2] -= 32;
  initials[3] = '\0';
  return initials;
}