/* DESCRIPTION:
Write function RemoveExclamationMarks which removes all exclamation marks from a given string. */

void remove_exclamation_marks(const char *str_in, char *str_out) 
{
  int i;
  int j;
  
  i = 0;
  j = 0;
  while (str_in[i])
  {
    if (str_in[i] == '!')
      i++;
    if (str_in[i] != '!')
      {
      str_out[j] = str_in[i];
      i++;
      j++;
      }
  }
  str_out[j] = '\0';
}