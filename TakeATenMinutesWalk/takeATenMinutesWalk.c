/* DESCRIPTION:
You live in the city of Cartesia where all roads are laid out in a perfect grid.
You arrived ten minutes too early to an appointment, so you decided to take the opportunity to 
go for a short walk. The city provides its citizens with a Walk Generating App on their phones -- 
everytime you press the button it sends you an array of one-letter strings representing directions to walk (eg. ['n', 's', 'w', 'e']). 
You always walk only a single block for each letter (direction) and you know it takes you one minute to traverse one city block, 
so create a function that will return true if the walk the app gives you will take you exactly ten minutes 
(you don't want to be early or late!) and will, of course, return you to your starting point. Return false otherwise.

Note: you will always receive a valid array containing a random assortment of direction letters ('n', 's', 'e', or 'w' only). 
It will never give you an empty array (that's not a walk, that's standing still!). */

#include <stdbool.h>
#include <stdio.h>

bool isValidWalk(const char *walk) 
{
  int i;
  int toplam;
  int toplam2;
  
  i = 0;
  toplam = 0;
  toplam2 = 0;
  while(walk[i])
      i++;
  if(i < 9)
      return (false);
  i = 0;
  while(walk[i])
    {
      if(i > 9)
          return (false);
      if(walk[i] == 'n')
          toplam += 1;
      else if(walk[i] == 'e')
          toplam2 += 1;
      else if(walk[i] == 's')
          toplam -= 1;
      else if(walk[i] == 'w')
          toplam2 -= 1;
      i++;
    }
    if(toplam == 0 && toplam2 == 0)
        return (true);
  return(false);
}