/* DESCRIPTION:
Your task, is to create N×N multiplication table, of size provided in parameter.

For example, when given size is 3:

1 2 3
2 4 6
3 6 9
For the given example, the return value should be:

[[1,2,3],[2,4,6],[3,6,9]]
Note: in C, you must return an allocated table of allocated rows */

#include <stdlib.h>
#include <stdio.h>

int **multiplication_table(int n)
{
  int i;
  int j;
  int **arr;
  int add;
  int pow;

  pow = 1;
  add = 1;
  arr = (int **)malloc(sizeof(int *) * (n * n));
  if (!arr)
    return (NULL);

  i = 0;
  while (i < n)
  {
	arr[i] = (int *)malloc(sizeof(int) * n);
    j = 0;
    while (j < n)
    {
      arr[i][j] = add * pow;
      pow++;
      j++;
    }
    add = 1;
    pow = 1;
    i++;
    add = add + i;
  }
  return (arr);
}