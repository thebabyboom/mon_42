#include <unistd.h>

int ft_putchar(char c);
void	ft_print_comb2(void);

int main()
{
	ft_print_comb2();
	return (0);
}

int ft_putchar(char c)
{
	write(1,&c,1);
	return(0);
}

void	ft_print_comb2(void)
{
	int	numbers[2] = {48, 48};
	while (numbers[0] <= 57)
	{
		if (numbers[0] < numbers[1])
		{
			ft_putchar(numbers[0]);
			ft_putchar(numbers[1]);
			if (numbers[0] != 57)
				ft_putchar(',');
			if (numbers[0] != 57)
				ft_putchar(' ');
		}
		if (numbers[1]++ >= 57)
		{
			numbers[1] = 48;
			numbers[0]++;
		}
	}
}