/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_alpha.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/22 11:46:38 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/23 11:31:17 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int	cycle;

	cycle = 0;
	while (str[cycle] != '\0')
	{
		if (str[cycle] < 65 || str[cycle] > 122)
		{
			return (0);
		}
		cycle;
	}
	return (1);
}
