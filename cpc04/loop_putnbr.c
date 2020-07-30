/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   loop_putnbr.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <mmcharra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 11:48:52 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/27 12:36:47 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	loop_putnbr(int nb)
{
	int tempnb;
	int rem;

	rem = nb;
	tempnb = nb;
	while (tempnb >= 10)
	{
		tempnb = nb / 10;  // tempnb its 9
		while(rem >= 10)
		{
			rem = nb % 10; // rem is 35
		}
	ft_putchar(tempnb + '0');
	tempnb = rem;
	}
}

int     main(void)
{
	int nb;
	
	nb = 935;
	loop_putnbr(nb);
	return (0);
}