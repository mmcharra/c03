/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recursive_power.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <mmcharra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/26 20:35:58 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/29 14:48:13 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_power(int nb, int power)
{
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 1)
	{
		return (nb * ft_recursive_power(nb, --power));
	}
	return (nb);
}
/*
**int		main(void)
**{
**	int		nb;
**	int		power;
**
**	printf("4 ˆ 4 = %d\n", ft_recursive_power(4, 4));
**	printf("-1 ˆ 3 = %d\n", ft_recursive_power(-1, 3));
**	printf("0 ˆ 4 = %d\n", ft_recursive_power(0, 4));
**	printf("4 ˆ -1 = %d\n", ft_recursive_power(4, -1));
**	return (0);
**}
*/
