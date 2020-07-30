/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/14 08:51:26 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/20 12:33:48 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*a = 5214975
 *int % 10 ** power = 5 *power++;
 *int % 10 ** power = 2 *power++;
 *int % 10 ** power = 1 *power++;
 *int % 10 ** power = null
 */

#include <stdio.h>
#include <math.h>
#include <unistd.h>

int		give_power(int num, int pow)
{
	int i;

	i = 1;
	while (i <= pow)
	{
		num *= num;
		i++;
	}
	return num;
}

int find_god(int num)
{
	int starter;
	starter = 1;
	while (starter <= num/10)
	{
		starter *= 10;
	}
	return starter;
}


int		main(void)
{
	int orig_num;
	int god;
	int newnum;
	int calc;
	double res;
	double pwr;
	orig_num = 4251345;
	god = find_god(orig_num);	
	printf("god \n");
	printf("%d",god);
	printf("\n");
	calc  = (orig_num/god);
	printf(" calc here = %d", calc);
	/* here its 4 */
	orig_num =  orig_num -  ( calc * god) ;
	printf("orig_num %d \n", orig_num);

	/*  = 4 * god/10; */
	
	god = god / 10;
	calc = (orig_num/god);

	orig_num = orig_num - (calc * god);
	 
printf("calc %d , orig_num %d \n",calc, orig_num);	

		pwr = 1;
	pwr = give_power(orig_num, pwr); 
	write(1, &pwr, 1);
/*
	while (a % (pow(10,pwr))
	{
	res = (a % (pow(10,pwr));
	printf("%d", res);
	pwr++;
	}
*/
}
