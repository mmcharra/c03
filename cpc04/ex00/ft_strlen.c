/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <mmcharra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/26 11:45:54 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/26 11:59:42 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strlen(char *str)
{
	int cycle;

	cycle = 0;
	while (str[cycle] != '\0')
	{
		cycle++;
	}
	return (cycle);
}

/*
**int		main(void)
**{
**	printf("[ft] :: %i\n", ft_strlen("123456"));
**	printf("expected :: %lu\n", strlen("123456"));
**}
*/
