/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recursive_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <mmcharra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/26 16:30:49 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/26 21:13:35 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_factorial(int nb)
{
	if (nb <= 1)
		return (1);
	while (nb >= 2)
		return (nb * ft_recursive_factorial(nb - 1));
	return (0);
}

/*
**int		main(void)
**{
**	int		nb;
**
**	nb = 3;
**	printf("factorial of %d equals: %d", nb, ft_recursive_factorial(nb));
**	return (0);
**}
*/
