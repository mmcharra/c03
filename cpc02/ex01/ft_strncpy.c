/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/22 11:24:57 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/23 11:16:15 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int cycle;

	cycle = 0;
	while (src[cycle] != '\0' && cycle < n)
	{
		dest[cycle] = src[cycle];
		cycle++;
	}
	while (cycle < n)
	{
		dest[cycle] = '\0';
		cycle++;
	}
	return (dest);
}
