/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_prime.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <mmcharra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 18:59:13 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/28 20:03:36 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
** use iteration
*/

int		ft_is_prime(int nb)
{
	if (2 > nb)
		return (0);
	if (2 <= nb && 3 >= nb)
		return (1);
	if ((nb % 2 == 0) || (nb % 3 == 0))
	{
		return (0);
	}
	return (1);
}
/*
**int		main(void)
**{
**	printf("PRIME? -1	NO	%d\n", ft_is_prime(-1));
**	printf("PRIME?  0	NO	%d\n", ft_is_prime(0));
**	printf("PRIME?  1	NO	%d\n", ft_is_prime(1));
**	printf("PRIME?  2	Y: %d\n", ft_is_prime(2));
**	printf("PRIME?  4	NO	%d\n", ft_is_prime(4));
**	printf("PRIME?  3	Y: %d\n", ft_is_prime(3));
**	printf("PRIME?  5	Y:	%d\n", ft_is_prime(5));
**	printf("PRIME?  7	Y:	%d\n", ft_is_prime(7));
**	printf("PRIME?  9	NO	%d\n", ft_is_prime(9));
**	printf("PRIME?  10	NO	%d\n", ft_is_prime(10));
**	printf("PRIME?  11	Y:	%d\n", ft_is_prime(11));
**	printf("PRIME?  59 	Y: %d\n", ft_is_prime(59));
**	printf("PRIME?	7919 Y: %d\n", ft_is_prime(7919));
**}
*/
/*
** Create a function that returns 1
** if the number given as a parameter is a prime
** number, and 0 if it isn’t.
** 2	3	5	7	11	13	17	19	23	29
**	31	37	41	43	47	53	59	61	67	71
*/
