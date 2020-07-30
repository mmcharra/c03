/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_uppercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/22 13:40:56 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/23 11:38:42 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int	cycle;

	cycle = 0;
	while (str[cycle] != '\0')
	{
		if (str[cycle] < 65 || str[cycle] > 90)
		{
			return (0);
		}
		cycle++;
	}
	return (1);
}
