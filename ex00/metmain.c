/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   metmain.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <mmcharra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/23 17:49:02 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/23 18:02:15 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2)
{
	int oio;
	int i;

	i = 0;
	oio = 0;
	while (s1[i] != '\0')
	{
		oio = oio + s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		oio = oio - s2[i];
		i++;
	}
	return (oio);
}

int		main(void)
{	
	 char a[]= "Aa";
	 char b[]= "Az";

	printf("%d", ft_strcmp(a, b));
	printf("%d",strcmp(a,b));
}
