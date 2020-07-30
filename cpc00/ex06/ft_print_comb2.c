/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_put_comb_later.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/13 14:12:11 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/19 18:06:08 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

void	ft_print_comb2(void);

void	print_this(char c1, char c2, char c3, char c4)
{
	write(1, &c1, 1);
	write(1, &c2, 1);
	write(1, " ", 1);
	write(1, &c3, 1);
	write(1, &c4, 1);
}

void	ft_print_comb2(void)
{
	int		loop1;
	int		loop2;
	char	lft[2];
	char	rite[2];

	loop1 = 0;
	while (loop1 <= 98)
	{
		loop2 = 1;
		while (loop2 <= 99)
		{
			loop2 = loop2 <= loop1 ? loop1 + 1 : loop2;
			lft[0] = (loop1 / 10) + 48;
			lft[1] = loop1 < 10 ? (loop1 + 48) : ((loop1 % 10) + 48);
			rite[0] = (loop2 / 10) + 48;
			rite[1] = loop2 < 10 ? (loop2 + 48) : ((loop2 % 10) + 48);
			print_this(lft[0], lft[1], rite[0], rite[1]);
			if (loop1 != 98)
				write(1, ", ", 2);
			loop2++;
		}
		loop1++;
	}
}
