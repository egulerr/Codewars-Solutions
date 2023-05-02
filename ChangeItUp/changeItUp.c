/* DESCRIPTION:
Create a function that takes a string as a parameter and does the following, in this order:

Replaces every letter with the letter following it in the alphabet (see note below)
Makes any vowels capital
Makes any consonants lower case
Note:

the alphabet should wrap around, so Z becomes A
in this kata, y isn't considered as a vowel.
So, for example the string "Cat30" would return "dbU30" (Cat30 --> Dbu30 --> dbU30) */

char *change_it_up (char *str_out, const char *str_in)
{
  int i;
  int a;
  i = 0;
  while (str_in[i])
  {
	  if ((str_in[i] <= 90 && str_in[i] >= 65) || (str_in[i] <= 122 && str_in[i] >= 97))
		  str_out[i] = str_in[i] + 1;
	  else
		  str_out[i] = str_in[i];
	  if (str_in[i] == 'z')
		  str_out[i] = 'a';
    else if (str_in[i] == 'Z')
      str_out[i] = 'A';
	  i++;
  }
  str_out[i] = '\0';
  i = 0;
  printf("%s\n", str_out);
  while (str_out[i])
  {
	  if (str_out[i] == 'A' || str_out[i] == 'E' || str_out[i] == 'I' ||str_out[i] == 'O' ||str_out[i] == 'U' )
      a = 0;
	  else if (str_out[i] == 'a' || str_out[i] == 'e' || str_out[i] == 'i' ||str_out[i] == 'o' ||str_out[i] == 'u')
		  str_out[i] -= 32;
	  else if ((str_out[i] != 'a' || str_out[i] != 'e' || str_out[i] != 'i' ||str_out[i] != 'o' ||str_out[i] != 'u') && (str_out[i] >= 65 && str_out[i] <= 90))
		  str_out[i] += 32;
	  i++;
  }
  return str_out;
}