#include <unistd.h>

int ft_putchar(char c);
void ft_is_negative(int n);

int main()
{
	ft_is_negative(2);
	ft_putchar('\n');
	ft_is_negative(-2);
	return (0);
}


int ft_putchar(char c)
{
	write(1,&c,1);
	return(0);
}

void ft_is_negative(int n)
{
	if (n>=0)
		ft_putchar('P');
	else
		ft_putchar('N');
}