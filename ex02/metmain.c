/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   metmain.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <mmcharra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/24 18:35:18 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/24 19:40:33 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char ft_strcat(char *dest, char *src)
{
	int len_src;
	int len_dest;
	int len_both;

	len_src = 0;
	len_dest = 0;
	while (dest[len_dest] != '\0')
	{
		len_dest++;
	}
	printf("%d\n",len_dest);
	len_both = len_dest + 1;
	while (src[len_src] != '\0')
	{
	  len_both = len_dest + len_src;
	   dest[len_both] = src[len_src];
		len_src++;
	}
	dest[len_both] = '\0';
	printf("%d\n", len_src);
	return (*dest);
}

#include <stdio.h>

int main(void)
{
	char s1[]= "1234";
	char s2[]= "567890";

	ft_strcat(s1, s2);
	printf(" >>> %s", s1);
}