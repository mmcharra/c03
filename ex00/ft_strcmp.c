/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <mmcharra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/23 17:45:16 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/23 18:02:43 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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
