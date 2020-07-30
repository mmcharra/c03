/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_params.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <mmcharra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 09:36:39 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/29 09:50:58 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(char *str)
{
	while (*str)
	{
		write(1, &*str, 1);
		str++;
	}
}

int		main(int argc, char *argv[])
{
	int oio;

	oio = 1;
	while (oio < argc)
	{
		ft_print_params(argv[oio]);
		write(1, "\n", 1);
		oio++;
	}
}
