/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <mmcharra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/23 18:03:37 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/24 18:29:06 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				oio;

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
