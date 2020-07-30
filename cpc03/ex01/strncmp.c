/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strncmp.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <mmcharra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/26 10:25:47 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/26 10:49:36 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (i < n))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
/*
**int	main(void)
**{
**	printf("%d", ft_strncmp("abc124", "abc224", 4));
**	printf("expected %d\n", strncmp("abc124", "abc224", 4));
**}
*/
