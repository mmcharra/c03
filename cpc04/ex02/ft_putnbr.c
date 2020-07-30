/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <mmcharra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/26 12:06:05 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/27 16:07:00 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void			ft_putchar(char c)
{
	write(1, &c, 1);
}

void			ft_putnbr(int nb)
{
	long int	lnb;
	char		c;

	lnb = nb;
	if (0 > lnb)
	{
		write(1, "-", 1);
		lnb *= -1;
	}
	if (lnb > 9)
	{
		ft_putnbr(lnb / 10);
	}
	c = (lnb % 10) + '0';
	write(1, &c, 1);
}

int				main(void)
{
	int num;

	num = -90123901;
	ft_putnbr(num);
}

