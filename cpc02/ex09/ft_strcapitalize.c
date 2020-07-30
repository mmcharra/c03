/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcapitalize.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/23 08:46:43 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/23 12:55:21 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/* capitalize = 1
 * iterate chars
 * if char is alphabet a to z
 * capitalize it
 * capitalize = 0
 * cycle
 * if char = " ", capitalize =1
 * cycle
 */
char *ft_strcapitalize(char *str);
char capi(char *ch)
{
	ch = ch - 32;
}
char *ft_strcapitalize(char *str)
{
	int capitalize_this;
	int cycle;

	cycle = 0;
	capitalize_this = 1;
	while (str[cycle] != '\0')
	{
		if (str[cycle] == 32)
		{
			capitalize_this = 1;
		printf("%c>capi>1 \n", str[cycle]);
		}
		if (str[cycle] >= 97 && str[cycle] <= 122 && capitalize_this == 1)
		{
				printf("%c capi > 0 \n", str[cycle]);
				capi(str[cycle]);
				//	str[cycle] = 'A';
			   //	str[cycle] - 32;
				capitalize_this = 0;
		}
		cycle++;
	}
	return (str);
}

int	main(void)
{
	printf("%s", ft_strcapitalize("iabc snf wod"));
}
