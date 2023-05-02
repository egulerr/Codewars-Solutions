/* DESCRIPTION:
If you're faced with an input box, like this:

                                           +--------------+
Enter the price of the item, in dollars:   |              |
                                           +--------------+
do you put the $ sign in, or not? Inevitably, some people will type a $ sign and others will leave it out.
The instructions could be made clearer - but that won't help those annoying people who never read instructions anyway.

A better solution is to write code that can handle the input whether it includes a $ sign or not.

So, we need a simple function that converts a string representing a number (possibly with a $ sign in front of it) into the number itself.

Remember to consider negative numbers (the - sign may come either before or after the $ sign, if there is one),
and any extraneous space characters (leading, trailing, or around the $ sign) that the users might put in.
You do not need to handle input with trailing characters other than spaces (e.g. "1.2 3" or "1$").
If the given string does not represent a number, (either with or without a $ sign), return 0.0 . */

int ft_pow(int x)
{
  int i = -1;
  int return_nbr = 1;
  
  while (++i < x)
    return_nbr *= 10;
  return (return_nbr);
}

double money_value(char s[])
{
  long money;
  int neg;
  int i;
  int	diveder;
  double	return_nbr;
  
  diveder = 0;
  neg = 1;
  money = 0;
  i = 0;
  while (s[i] == '$' || s[i] == ' ')
	 i++;
  if (s[i] == '-')
	  neg *= -1;
  while (s[i])
  {
	  if (s[i] >= '0' && s[i] <= '9')
      money = money * 10  + (s[i] - 48);
	  if (s[i] == '.')
		  while (s[diveder + i + 1])
			  diveder++;
    i++;
  }
	return_nbr = (double)money / ft_pow(diveder);
  return (return_nbr * neg);
}