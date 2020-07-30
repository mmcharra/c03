/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strncat.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <mmcharra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/24 19:23:56 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/26 11:13:12 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				dest_cycle;
	unsigned	int	src_cycle;

	dest_cycle = 0;
	src_cycle = 0;
	while (dest[dest_cycle] != '\0')
	{
		dest_cycle++;
	}
	while (src[src_cycle] != '\0' && src_cycle < nb)
	{
		dest[dest_cycle] = src[src_cycle];
		dest_cycle++;
		src_cycle++;
	}
	dest[dest_cycle] = '\0';
	return (dest);
}
/*
**int		main(void)
**{
**	char 			src[20] = "ab";
**	char 			dest[20] = "dddeee";
**
**	nb = 4;
**	printf("%s", ft_strncat(dest, src, nb));
**	//printf("expected %s \n", strncat(dest, src, nb));
**}
*/
