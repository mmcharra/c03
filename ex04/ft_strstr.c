/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <mmcharra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/25 10:30:27 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/25 15:34:35 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
	while (*str)
	{
		char *saved_str = str;
		while (*str && *to_find && *str == *to_find)
		{
			str++;
			to_find++;
		}
		if (!*to_find)
		{
			return saved_str;
		}
		str++;
	}
	return NULL;
}

int main(void)
{
	char    str[] = "Big Ice cream";
	char    to_find[] = "ce";
	printf("%s", ft_strstr(str,to_find));
}

