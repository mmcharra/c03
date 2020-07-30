/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_reverse_alphabet.c                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/10 17:49:51 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/20 19:20:24 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void);

void	ft_print_reverse_alphabet(void)
{
	char chch;

	chch = 'z';
	while (chch >= 'a')
	{
		write(1, &chch, 1);
		chch--;
	}
}
