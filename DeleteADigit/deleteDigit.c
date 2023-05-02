/* Task
Given an integer n, find the maximal number you can obtain
by deleting exactly one digit of the given number.

Example
For n = 152, the output should be 52;

For n = 1001, the output should be 101.

Input/Output
[input] integer n

Constraints: 10 ≤ n ≤ 1000000.

[output] an integer */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int removechar(char *str, char chartoremove){
    int i, j;
	int r;
	int flag = 1;
    int len = strlen(str);
	j = 0;
	char *res = malloc(sizeof(char) * len);
    for(i=0; i<len; i++)
  {
        if(str[i] == chartoremove && flag)
		{
			i++;
			flag = 0;
		}
		res[j++] = str[i];
	}
	res[j] = '\0';
	r = atoi(res);
	return (r);
}

int	deleteDigit(int n)
{
  int	len;
  int	len2;
  int	i;
  char	*str;
  int max = 0;

  if (n >= 10 && n <= 1000000)
  {
	  i = 0;
	  asprintf(&str, "%d", n);
	  len = strlen(str);
	  while(i < len)
	  {
		  if (max < removechar(str, str[i]))
	 		  max = removechar(str, str[i]);
		  i++;
	  }
	  return (max);
  }
  else
	  return (0);
}