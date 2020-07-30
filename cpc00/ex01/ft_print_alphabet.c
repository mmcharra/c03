/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_alphabet.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/19 16:18:39 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/19 17:13:00 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet();

void	ft_print_alphabet(void)
{
	char cc;

	cc = 'a';
	while (cc <= 'z')
	{
		write(1, &cc, 1);
		cc++;
	}
}
