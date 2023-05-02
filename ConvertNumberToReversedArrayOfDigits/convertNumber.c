/* Convert number to reversed array of digits
Given a random non-negative number, you have to return the digits of this 
number within an array in reverse order.

Example(Input => Output):
35231 => [1,3,2,5,3]
0 => [0] */

#include <stddef.h>
#include <inttypes.h>
#include <stdlib.h>
#include <stdio.h>

int nbrlen(uint64_t n)
{
  int i = 1;
  if(i < 0)
  {
    i++;
    n *= -1;
  }
  while(n > 0)
  {
    n /= 10;
    i++;
  }
  return (i);
}


void digitize (uint64_t n, uint8_t digits[], size_t *length_out)
{
  size_t len;
  size_t i = 0;
  int *arr;
  len = nbrlen(n);
  int tmp_nbr;

  tmp_nbr = n;
  
  while (n > 0)
  {
  digits[i] = n % 10;
  n = n / 10;
  i++;
  }
  if(tmp_nbr == 0)
  {
    digits[0] = 0;
    *length_out = 1;
    return ;
  }
  *length_out = i;
}