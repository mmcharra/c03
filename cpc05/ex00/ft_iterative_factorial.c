/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <mmcharra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/26 13:09:01 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/30 11:06:13 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int fact;

	fact = nb;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		fact = fact * (nb - 1);
		nb--;
	}
	return (fact);
}

/*
**int	ft_iterative_factorial(int nb)
**{
**	int result;
**
**	result = 1;
**	if (0 > nb)
**		return (0);
**	while (0 < nb)
**		result *= nb--;
**	return (result);
**}
*/
/*
**int		main(void)
**{
**	int nb;
**
**	nb = -1;
**	printf("factorial of %d equals: %d", nb, ft_iterative_factorial(nb));
**}
*/
/*
** Create an iterated function that returns a number.
** This number is the result of a
** factorial operation based on the number
** given as a parameter.
** If the argument is not valid
** the function should return 0
*/
