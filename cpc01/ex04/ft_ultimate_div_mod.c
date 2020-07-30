/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_div_mod.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/20 15:38:56 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/22 15:30:39 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int idiv;
	int imod;

	idiv = *a / *b;
	imod = *a % *b;
	*a = idiv;
	*b = imod;
}
