#include "main.h"
#include <stdlib.h>
/**
 * count_word - function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, c, wo;

	flag = 0;
	wo = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			wo++;
		}
	}

	return (wo);
}
/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: a pointer to an array of strings (words), or NULL on failure
 */

char **strtow(char *str)
{
	char **dino, *cat;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	dino = (char **) malloc(sizeof(char *) * (words + 1));
	if (dino == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				cat = (char *) malloc(sizeof(char) * (c + 1));
				if (cat == NULL)
					return (NULL);
				while (start < end)
					*cat++ = str[start++];
				*cat = '\0';
				dino[k] = cat - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	dino[k] = NULL;

	return (dino);
}

