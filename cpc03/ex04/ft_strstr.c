/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <mmcharra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/25 10:30:27 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/26 14:08:01 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char *saved_str;

	while (*str)
	{
		saved_str = str;
		while (*str && *to_find && *str == *to_find)
		{
			str++;
			to_find++;
		}
		if (!*to_find)
		{
			return (saved_str);
		}
		str++;
	}
	return (0);
}

/*
**int		main(void)
**{
**	printf("%s", ft_strstr("Big Ice cream", "ce"));
**}
*/
