/* DESCRIPTION:
Introduction
There is a war...between alphabets!
There are two groups of hostile letters. The tension between left side letters and right side 
letters was too high and the war began. The letters called airstrike to help them in war - dashes and dots are spread throughout the battlefield.
Who will win?

Task
Write a function that accepts a fight string which consists of only small letters and * which represents a bomb drop place.
Return who wins the fight after bombs are exploded. When the left side wins return Left side wins!, and when the right side wins
return Right side wins!. In other cases, return Let's fight again!.

The left side letters and their power:

 w - 4
 p - 3 
 b - 2
 s - 1
The right side letters and their power:

 m - 4
 q - 3 
 d - 2
 z - 1
The other letters don't have power and are only victims.
The * bombs kill the adjacent letters ( i.e. aa*aa => a___a, **aa** => ______ );

Example
alphabet_war("s*zz");          => Right side wins!
alphabet_war("*zd*qm*wp*bs*"); => Let's fight again!
alphabet_war("zzzz*s*");       => Right side wins!
alphabet_war("www*www****z");  => Left side wins! */

#include <stdio.h>
#include <string.h>
char *alphabet_war(const char *fight)
{
  char *arr;
  arr = strdup(fight);

  int l = 0;
  int r = 0;

  int i = 0;
  while (arr[i])
  {
    if (arr[i] == '*')
    {
		arr[i - 1] = 1;
     if (arr[i + 1] != '*')
	 {
      	arr[i + 1] = 1;
	  	arr[i] = 1;
	 }
    }
	i++;
  }
  i = 0;
  while(arr[i])
  {
	  if (arr[i] == 'w')
		  l += 4;
	  else if (arr[i] == 'p')
		  l += 3;
	  else if (arr[i] == 'b')
		  l += 2;
	  else if (arr[i] == 's')
		  l += 1;
	  else if (arr[i] == 'm')
		  r += 4;
	  else if (arr[i] == 'q')
		  r += 3;
	  else if (arr[i] == 'd')
		  r += 2;
	  else if (arr[i] == 'z')
		  r += 1;
	  i++;
  }
  printf("%s\n", arr);
  if (l > r)
	  return ("Left side wins!");
  else if (l == r)
	  return ("Let's fight again!");
  else if (r > l)
	  return ("Right side wins!");
 return ("Let's fight again");
}
