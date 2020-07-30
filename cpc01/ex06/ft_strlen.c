/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/21 14:42:38 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/21 17:23:12 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int cycle;

	cycle = 0;
	while (str[cycle] != '\0')
	{
		cycle++;
	}
	return (cycle);
}
