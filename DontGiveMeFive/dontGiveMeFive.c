/* DESCRIPTION:
Don't give me five!
In this kata you get the start number and the end number 
of a region and should return the count of all numbersexcept numbers with a 5 in it.
The start and the end number are both inclusive!

Examples:

1,9 -> 1,2,3,4,6,7,8,9 -> Result 8
4,17 -> 4,6,7,8,9,10,11,12,13,14,16,17 -> Result 12
The result may contain fives. ;-)
The start number will always be smaller than the end number. Both numbers can be also negative! */

#include <string.h>
#include <stdio.h>  
#include <math.h>  
#include <stdlib.h>  
int five_checker(int *nums, int digi)
{
  int i = 0;
  while(i < digi)
  {
    if(nums[i] == 5)
      return 0;
    i++;
  }
  return 1;
}

int *parcala(int num)
{
  int *p;
  p = malloc(567);
  int i = 0;
  num = abs(num);
  while(num > 0)
  {
    p[i] = num % 10;
    num /= 10;
    i++;
  }
  return p;
}

int digi(int num)
{
  int i = 0;
  num = abs(num);
  while(num > 0)
  {
    i++;
    num /= 10;
  }
  return i;
}

int dontGiveMeFive(int start, int end)
{
  int *p;
  p = malloc(24 * sizeof(int));
  int count = 0;
  int digi2 = 0;
  while(start <= end)
  {
      p = parcala(start);
   digi2 = digi(start);
    if(five_checker(p, digi2) == 1)
      count++;
    start++;
  }
  return count;
}