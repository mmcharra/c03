/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_fibonacci.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <mmcharra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/26 20:43:23 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/28 13:07:40 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_fibonacci(int index)
{
	if (0 > index)
		return (-1);
	if (2 > index)
		return ((index) ? 1 : 0);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
**int		main(void)
**{
**	printf("fb(0) = %d\n", ft_fibonacci(0));
**	printf("fb(1) = %d\n", ft_fibonacci(1));
**	printf("fb(2) = %d\n", ft_fibonacci(2));
**	printf("fb(3) = %d\n", ft_fibonacci(3));
**	printf("fb(4) = %d\n", ft_fibonacci(4));
**	printf("fb(5) = %d\n", ft_fibonacci(5));
**	printf("fb(6) = %d\n", ft_fibonacci(6));
**	printf("fb(7) = %d\n", ft_fibonacci(7));
**	return (0);
**}
*/
/*
** Create a function ft_fibonacci that returns
**  the n-th element of the Fibonacci
** sequence, the first element
** being at the 0 index.
**  We’ll consider that the Fibonacci
** sequence starts like this: 0, 1, 1, 2.
** if index = 7;  0 1 1 2 3 5 8
** next value = (index - 1) + (index - 2)
*/
