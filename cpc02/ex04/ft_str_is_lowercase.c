/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_lowercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/22 13:16:30 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/23 11:35:33 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int	cycle;

	cycle = 0;
	while (str[cycle] != '\0')
	{
		if (str[cycle] < 97 || str[cycle] > 122)
		{
			return (0);
		}
		cycle++;
	}
	return (1);
}
