#include <stdio.h>
#include <fcntl.h>

int main()
{
	
	write(1,3,1);

}

void ft_putchar(char c)
{
	write(1, &c , 1);

}
