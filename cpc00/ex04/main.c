/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/14 08:29:47 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/14 08:33:43 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

void	ft_is_negative(int n);

int		main(void)
{
	int num;

	scanf("%d", &num);
	ft_is_negative(num);
}
