/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcat.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <mmcharra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/24 19:23:56 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/24 19:40:58 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	ft_strcat(char *dest, char *src)
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
	len_both = len_dest + 1;
	while (src[len_src] != '\0')
	{
		len_both = len_dest + len_src;
		dest[len_both] = src[len_src];
		len_src++;
	}
	dest[len_both] = '\0';
	return (dest);
}
