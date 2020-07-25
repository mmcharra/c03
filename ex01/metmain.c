/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <mmcharra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/23 18:03:37 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/24 17:43:45 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
    int oio;
    i = 0;
	oio = 0;
	while (s1[i] != '\0' && i < n)
	{
		oio = oio + s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0' && i < n)
	{
		oio = oio - s2[i];
		i++;
	}
	return (oio);
}

int main(void)
{	
	unsigned int i;
	char s1[]="bbab";
	char s2[]="aaac";
	i = 2;

    printf("%d",ft_strncmp(s1,s2,i));
}
