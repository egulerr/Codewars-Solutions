/* ATM machines allow 4 or 6 digit PIN codes and PIN codes cannot contain anything 
but exactly 4 digits or exactly 6 digits.
If the function is passed a valid PIN string, return true, else return false. */

#include <stdbool.h>

bool validate_pin(const char *pin) {
  int i;
  int count = 0;
  
  i = 0;
  if (!pin[i])
    return (false);
  while(pin[i])
  {
    if (pin[i] >= 48 && pin[i] <= 57)
      count++;
    else
      return (false);
    i++;
  }
  if (count == 4 || count == 6)
    return (true);
  else
    return (false);
}