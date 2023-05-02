/* You get an array of numbers, return the sum of all of the positives ones.

Example [1,-4,7,12] => 1 + 7 + 12 = 20

Note: if there is nothing to sum, the sum is default to 0. */

#include <stddef.h>

int positive_sum(const int *values, size_t count)
{
  int i;
  int sum = 0;
  
  i = 0;
  while (i < count)
    {
    if (values[i] > 0)
      sum += values[i];
    i++;
  }
  return (sum);
}