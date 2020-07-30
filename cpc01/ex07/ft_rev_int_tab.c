/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rev_int_tab.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/21 15:05:54 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/23 09:27:49 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int tab_right;
	int	tab_left;
	int	temp;

	tab_left = 0;
	while (tab_left < (size / 2))
	{
		temp = tab[tab_left];
		tab[tab_left] = tab[tab_right];
		tab[tab_right] = temp;
		tab_left++;
		tab_right--;
	}
	printf("%d", tab);
}


int main(){
	int a;
	int *p;
	a = 12345;
	p = &a;
	ft_rev_int_tab(*p,5);
	printf("%d", a);
}
