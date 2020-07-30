/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_alpha.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/22 11:46:38 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/22 13:15:46 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_alpha(char *str)
{
	int	cycle;
	int	answer;

	cycle = 0;
	answer = 0;
	while	(str[cycle] != '\0') 
	{
		if ((str[cycle] >= 'a' && str[cycle] <= 'z')
					|| (str[cycle] >= 'A' && str[cycle] <= 'Z'))
		{
			answer++;
		}
//		printf("\n%c hhh \t \n", str[cycle]);
		cycle++;
	}
	printf("%d %d \n", answer, cycle);
	if (answer == cycle)
	{
		answer = 1;
	}
	else
	{
		answer = 0;
	}
	return (answer);
}

int	main(void)
{
	char *srcstr;
	
	srcstr = "";
	printf("%d", 	ft_str_is_alpha(srcstr));
	return (0);
}
