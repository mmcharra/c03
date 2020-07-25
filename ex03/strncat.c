/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strncat.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <mmcharra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/24 19:42:34 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/25 09:59:20 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char			*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned	int len_dest;
	unsigned	int len_src;

	len_dest = 0;
	while (dest[len_dest] != '\0')
	{
		len_dest++;
	}
	len_src = 0;
	while (src[len_src] != '\0' && len_src < nb)
	{
		dest[len_dest + len_src] = src[len_src];
		len_src++;
	}
	return (dest);
}
