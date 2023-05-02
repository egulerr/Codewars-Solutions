/* DESCRIPTION:
ROT13 is a simple letter substitution cipher that replaces a letter with the letter 13 letters 
after it in the alphabet. ROT13 is an example of the Caesar cipher.

Create a function that takes a string and returns the string ciphered with Rot13.
If there are numbers or special characters included in the string, they should be 
returned as they are. Only letters from the latin/english alphabet should be shifted, 
like in the original Rot13 "implementation". */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
char *rot13(const char *src)
{
	int	i;
	char *arr = strdup(src);
	i = 0;
	while (src[i])
	{
		if ((src[i] >= 'a' && src[i] <= 'm') || (src[i] >= 'A' && src[i] <= 'M'))
			arr[i] += 13;
		else if ((src[i] >= 'n' && src[i] <= 'z') || (src[i] >= 'N' && src[i] <= 'Z'))
			arr[i] -= 13;
		i++;
	}
	arr[i] = '\0';
	return (arr);
}