/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <mmcharra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/26 12:00:58 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/26 12:05:16 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putstr(char *str)
{
	int cycle;

	cycle = 0;
	while (str[cycle] != '\0')
	{
		write(1, &str[cycle], 1);
		cycle++;
	}
}

/*
**int			main(void)
**{
**	ft_putstr("A1 B2 %c3 #d4");
**}
*/
