/*
** EPITECH PROJECT, 2017
** lib
** File description:
** lib tout ca
*/

#include "test.h"

int     my_getnbr(char *str)
{
	int   i = 0;
	int   res = 0;
	int   neg = 0;

	while (str[i] != '\0' && (str[i] == '-' || str[i] == '+')) {
		if (str[i] == '-')
			neg++;
		i++;
	}
	while (str[i] != '\0') {
		res *= 10;
		res += str[i] - 48;
		i++;
	}
	if ((neg % 2) == 1)
		res *= -1;
	return (res);
}

int     my_strcmp(char *s1, char *s2)
{
	int   i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	else if (s1[i] > s2[i])
		return (1);
	else
		return (-1);

}
