/* DESCRIPTION:
Your goal in this kata is to implement a difference function, which subtracts one list from another and returns the result.

It should remove all values from list a, which are present in list b keeping their order.

array_diff({1, 2}, 2, {1}, 1, *z) == {2} (z == 1)
If a value is present in b, all of its occurrences must be removed from the other:

array_diff({1, 2, 2, 2, 3}, 5, {2}, 1, *z) == {1, 3} (z == 2)
NOTE: In C, assign return array length to pointer *z */

#include <stdlib.h>

int check(int *arr2, int a, int len)
{
  int i  = 0;
  while(i < len)
  {
    if(arr2[i] == a)
      return 0;
    i++;
  }
  return 1;
}

int *array_diff(const int *arr1, size_t n1, const int *arr2, size_t n2, size_t *z) 
{
  int i;
  int j;
  
  int *diff;
  diff = malloc(100);
  j = 0;
  i = 0;
  while (i < n1)
  {
    if(check(arr2, arr1[i], n2))
      diff[j++] = arr1[i]; 
    i++;
  }
  *z = j;
  return diff;
  }