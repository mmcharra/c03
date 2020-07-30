/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strcmp.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <mmcharra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/23 17:49:02 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/26 10:19:58 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
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
** 	int	main(void)
**	{
**		char a[]= "abd124";
**	 	char b[]= "bbc124";
**
**		printf("[ft] %d\n", ft_strcmp(a, b));
**		printf("expected %d\n",strcmp(a,b));
**	}
*/
