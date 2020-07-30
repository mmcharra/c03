/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_put_comb_later.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/13 14:12:11 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/19 18:03:30 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	chout_out(char thous, char huns, char onez);
void	ft_print_comb(void);

void	chout_out(char thous, char huns, char onez)
{
	write(1, &thous, 1);
	write(1, &huns, 1);
	write(1, &onez, 1);
	if ((thous < '7') || (huns < '8') || (onez < '9'))
	{
		write(1, &",", 1);
		write(1, &" ", 1);
	}
}

void	ft_print_comb(void)
{
	char thousands;
	char hundreds;
	char ones;

	thousands = '0';
	while (thousands <= '7')
	{
		hundreds = thousands + 1;
		while (hundreds <= '9')
		{
			ones = hundreds + 1;
			while (ones <= '9')
			{
				chout_out(thousands, hundreds, ones);
				ones = ones + 1;
			}
			hundreds = hundreds + 1;
		}
		thousands = thousands + 1;
	}
}
