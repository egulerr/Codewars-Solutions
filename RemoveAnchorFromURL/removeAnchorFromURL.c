/* DESCRIPTION:
Complete the function/method so that it returns the url with anything after the anchor (#) removed.

Examples
"www.codewars.com#about" --> "www.codewars.com"
"www.codewars.com?page=1" -->"www.codewars.com?page=1" */

#include <stdlib.h>
#include <string.h>
char *remove_url_anchor(const char *url_in) 
{
  int i;
  char *arr;
  
  arr = (char *)malloc(sizeof(char) * strlen(url_in) + 1);
  i = 0;
  while (url_in[i] != '#' && url_in[i] != '\0')
  {
    arr[i] = url_in[i];
    i++;
  }
  arr[i] = '\0';
  return (arr);
}