/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sqrt.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <mmcharra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 13:05:39 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/28 18:57:20 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
** use iteration
*/

int		ft_sqrt(int nb)
{
	long int starter;

	if (nb < 2)
		return (0);
	starter = 2;
	while (nb > (starter * starter))
	{
		starter++;
	}
	if (nb == (starter * starter))
	{
		return (starter);
	}
	else
	{
		return (0);
	}
}
/*
**int		main(void**)**
**{
**	printf("SQRT -1 \t %d\n", ft_sqrt(-1));
**	printf("SQRT  0 \t %d\n", ft_sqrt(0));
**	printf("SQRT  1 \t %d\n", ft_sqrt(1));
**	printf("SQRT  2 \t %d\n", ft_sqrt(2));
**	printf("SQRT 16 \t %d\n", ft_sqrt(16));
**	printf("SQRT 18 \t %d\n", ft_sqrt(18));
**	printf("SQRT 36 \t %d\n", ft_sqrt(36));
**	printf("SQRT 49 \t %d\n", ft_sqrt(49));
**	printf("SQRT 51 \t %d\n", ft_sqrt(51));
**	printf("SQRT 46656 <216> \t %d\n", ft_sqrt(46656));
**}
*/
