/* Usually when you buy something, you're asked whether your credit card number, phone number or answer to your most 
secret question is still correct. However, since someone could look over your shoulder, you don't want that shown on 
your screen. Instead, we mask it.
Your task is to write a function maskify, which changes all but the last four characters into '#'. */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *maskify (char *masked, const char *string)
{
  int len, i, count = 0;
  len = strlen(string);
  strcpy(masked, string);
  i = 0;
  if (len == 4)
	  return (masked);
  while (i < len - 4)
  {
	  masked[i] = '#';
	  count++;
	  i++;
  }
  masked[len] = '\0';
  return (masked);
}