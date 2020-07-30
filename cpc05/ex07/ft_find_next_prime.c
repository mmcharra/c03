/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_find_next_prime.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <mmcharra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 19:42:21 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/28 20:29:10 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
** use iteration
*/

int		ft_find_next_prime(int nb)
{
	while (nb)
	{
		if (nb % 2 == 0 || nb % 3 == 0)
		{
			nb++;
		}
		else
		{
			return (nb);
		}
	}
	return (0);
}
/*
**int		main(void)
**{
**	printf("nxtPRM -1		\t %d\n", ft_find_next_prime(-1));
**	printf("nxtPRM  0		\t %d\n", ft_find_next_prime(0));
**	printf("nxtPRM  1		\t %d\n", ft_find_next_prime(1));
**	printf("nxtPRM  2		\t %d\n", ft_find_next_prime(2));
**	printf("nxtPRM  4	 	\t %d\n", ft_find_next_prime(4));
**	printf("nxtPRM  5		\t %d\n", ft_find_next_prime(5));
**	printf("nxtPRM  7		\t %d\n", ft_find_next_prime(7));
**	printf("nxtPRM  8		\t %d\n", ft_find_next_prime(8));
**	printf("nxtPRM  9		\t %d\n", ft_find_next_prime(9));
**	printf("nxtPRM  10		\t %d\n", ft_find_next_prime(10));
**	printf("nxtPRM  11		\t %d\n", ft_find_next_prime(11));
**	printf("nxtPRM  57		\t %d\n", ft_find_next_prime(57));
**	printf("nxtPRM  58		\t %d\n", ft_find_next_prime(58));
**	printf("nxtPRM  59		\t %d\n", ft_find_next_prime(59));
**	printf("nxtPRM	7917	\t %d\n", ft_find_next_prime(7917));
**	printf("nxtPRM	7918	\t %d\n", ft_find_next_prime(7918));
**	printf("nxtPRM	7919	\t %d\n", ft_find_next_prime(7919));
**}
*/
/*
** Create a function that returns the
** next prime number greater or equal to the number
** given as argument.
** 2	3	5	7	11	13	17	19	23	29
**	31	37	41	43	47	53	59	61	67	71
*/
