/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/21 14:32:08 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/21 17:22:52 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int cycle;

	cycle = 0;
	while (str[cycle] != '\0')
	{
		write(1, &str[cycle], 1);
		cycle++;
	}
}
