/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/22 10:44:57 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/22 11:24:32 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int cycle;

	cycle = 0;
	while (src[cycle] != '\0')
	{
		dest[cycle] = src[cycle];
		cycle++;
	}
	dest[cycle] = '\0';
	return (dest);
}
