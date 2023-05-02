/* DESCRIPTION:
Write a function that takes in a binary string and returns the equivalent decoded text (the text is ASCII encoded).

Each 8 bits on the binary string represent 1 character on the ASCII table.

The input string will always be a valid binary string.

Characters can be in the range from "00000000" to "11111111" (inclusive)

Note: In the case of an empty binary string your function should return an empty string. */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char *binary_to_string(const char *binary) 
{
  char *ascii;
  int i;
  int j;
  char a;
  int count = 0;
  
  a = 0;
  i = strlen(binary) / 8;
  ascii = malloc(sizeof(char) * i + 1);
  i = 0;
  j = 0;
  a = 0;
  while(binary[i])
  {
    a <<= 1;
    if(binary[i] == '1')
      a |= 1;
    count++;
    if(count == 8)
    {
      ascii[j++] = a;
      count = 0;
      a = 0;
    }
    i++;
  }
  ascii[j] = '\0';
  return ascii;
}