/* DESCRIPTION:
Given a string of words, you need to find the highest scoring word.

Each letter of a word scores points according to its position in the alphabet: a = 1, b = 2, c = 3 etc.

For example, the score of abad is 8 (1 + 2 + 1 + 4).

You need to return the highest scoring word as a string.

If two words score the same, return the word that appears earliest in the original string.

All letters will be lowercase and all inputs will be valid. */

#include <stdio.h>
#include <stdlib.h>
static int	howmanycut(char const *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			count++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*copyit(char *newstr, const char *s, int i, int len)
{
	int	j;

	j = 0;
	while (len > 0)
	{
		newstr[j] = s[i - len];
		len--;
		j++;
	}
	newstr[j] = '\0';
	return (newstr);
}

static void	*splitit(char **newstr, char const *s, char c, int howmany)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = 0;
	while (j < howmany)
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		while (s[i] != '\0' && s[i] != c)
		{
			i++;
			len++;
		}
		newstr[j] = (char *)malloc(sizeof(char) * (len + 1));
		if (!newstr[j])
			return (NULL);
		copyit(newstr[j], s, i, len);
		j++;
		len = 0;
	}
	newstr[j] = NULL;
	return (newstr[j]);
}

char	**ft_split(char const *s, char c)
{
	int		howmany;
	char	**newstr;

	if (s)
	{
		howmany = howmanycut(s, c);
		newstr = (char **)malloc(sizeof(char *) * (howmany + 1));
		if (!newstr)
			return (NULL);
		splitit(newstr, s, c, howmany);
		return (newstr);
	}
	return (0);
}

char  *highestScoringWord(const char *str)
{
	int count = 0;
	int sum = 0;
	int highest = 0;
	int i,j;
	char **words;
	words = ft_split(str, ' ');

	j = 0;
	i = 0;
	while (words[i])
	{
		j = 0;
		while (words[i][j])
		{
			sum += words[i][j] - 96;
			j++;
		}
		if (sum > highest)
		{
			highest = sum;
			count = i;
		}
		sum = 0;
		i++;
	}
  return (words[count]);
}