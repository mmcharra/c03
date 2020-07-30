/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_numeric.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/23 11:32:38 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/23 11:33:21 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int	cycle;

	cycle = 0;
	while (str[cycle] != '\0')
	{
		if (str[cycle] < 48 || str[cycle] > 57)
		{
			return (0);
		}
		cycle++;
	}
	return (1);
}
