/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_printable.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/22 13:42:34 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/23 11:44:53 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int	cycle;

	cycle = 0;
	while (str[cycle] != '\0')
	{
		if (str[cycle] < 32 || str[cycle] > 126)
		{
			return (0);
		}
		cycle++;
	}
	return (1);
}
