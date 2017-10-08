#include <unistd.h>

int ft_putchar(char c);
void ft_putnbr(int nb);

int main()
{
	ft_putnbr(-12447);
	return (0);
}

int ft_putchar(char c)
{
	write(1,&c,1);
	return(0);
}
void	ft_putnbr(int nb)
{
	int	temp;
	int	size;

	size = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	temp = nb;
	while ((temp /= 10) > 0)
		size *= 10;
	temp = nb;
	while (size)
	{
		ft_putchar((char)((temp / size)) + 48);
		temp %= size;
		size /= 10;
	}
}
