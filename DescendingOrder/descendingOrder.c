/* DESCRIPTION:
Your task is to make a function that can take any non-negative integer as an argument and 
return it with its digits in descending order. Essentially, rearrange the digits 
to create the highest possible number.

Examples:
Input: 42145 Output: 54421

Input: 145263 Output: 654321

Input: 123456789 Output: 987654321 */

#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
void sorting(int *arr, int size)
{
	int i;
	int j;
	int temp;
	temp = 0;
	i = 0;
	j = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
			j++;
		}
		i++;
	}
}
uint64_t descendingOrder(uint64_t n)
{
	int *arr = (int *)malloc(sizeof(int) * 100);
	int	i;
	int j;
  uint64_t result = 0;
	i = 0;
	while (n > 0)
	{
		arr[i] = n % 10;
		n /= 10;
		i++;
	}
	sorting(arr, i);
	j = 0;
	while (j < i)
	{
		result = (result * 10) + arr[j];
		j++;
	}
	printf("%d", result);
	return (result);
}