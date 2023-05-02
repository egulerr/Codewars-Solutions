/* DESCRIPTION:
Your task is to write function factorial.

https://en.wikipedia.org/wiki/Factorial */

unsigned __int128 factorial(unsigned n)
{
  __int128 fact;
  
  fact = 1;
  if (n == 0 || n == 1)
    return (1);
  while (n != 0)
  {
    printf("%d\n", fact);
    fact *= n;
    n--;
  }
  return (fact);
}