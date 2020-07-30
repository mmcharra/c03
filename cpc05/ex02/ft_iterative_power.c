/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_power.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <mmcharra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/26 16:29:01 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/29 12:00:36 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int	oio;

	oio = 1;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (nb == 0)
		return (0);
	while (power > 0)
	{
		oio = oio * nb;
		power--;
	}
	return (oio);
}
/*
**int		main(void)
**{
**	printf("2 ^ 3 = %d\n", ft_iterative_power(2, 3));
**	printf("0 ^ -1 = %d\n", ft_iterative_power(0, -1));
**	printf("0 ^ 0 = %d\n", ft_iterative_power(0, 0));
**	printf("-2 ^ 3 = %d\n", ft_iterative_power(-2, 3));
**	printf("2 ^ -1 = %d\n", ft_iterative_power(2, -1));
**	printf("5 ^ 3  = %d\n", ft_iterative_power(5, 3));
**}
*/
/*
** Create an iterated function that returns
** the value of a power applied to a number.
** An power lower than 0 returns 0. Overflows
** must not be handled. We’ve decided
**  that 0 power 0 will returns 1
*/
