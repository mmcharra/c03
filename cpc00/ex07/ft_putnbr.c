/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/14 15:42:27 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/20 19:55:05 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;
	int		god;
	int		rem;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	god = 1;
	while (nb > god)
	{
		god = god * 10;
	}
	god = god / 10;
	while (god >= 1)
	{
		rem = nb / god;
		c = rem + 48;
		write(1, &c, 1);
		nb = nb % god;
		god = god / 10;
	}
}
