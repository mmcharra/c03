/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rev_params.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <mmcharra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 09:52:54 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/29 10:00:34 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_params(char *str)
{
	while (*str != '\0')
	{
		write(1, &*str, 1);
		str++;
	}
}

int		main(int argc, char *argv[])
{
	while (argc > 1)
	{
		ft_rev_params(argv[(argc - 1)]);
		write(1, "\n", 1);
		argc--;
	}
}
