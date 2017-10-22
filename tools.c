/**
 * @Author: Coléry David <Babyboom>
 * @Date:   21/10/2017  03:24:26
 * @Email:  thebabyboom@gmail.com
 * @Filename: tools.c
 * @Last modified by:   Coléry David
 * @Last modified time: 22/10/2017  06:28:14
 */
#include <unistd.h>
#include "tools.h"

int ft_putchar(char c)
{
	write(1,&c,1);
	return(0);
}

void ft_print_alphabet(void)
{
	char i ='a';
	while(i<='z')
	{
		ft_putchar(i);
		i++;
	}
}

void ft_print_reverse_alphabet(void)
{
	char i ='z';
	while(i>='a')
	{
		ft_putchar(i);
		i--;
	}
}

void ft_print_numbers(void)
{
	int i = 48;

	while(i<=57)
	{
		ft_putchar(i);
		i++;
	}
}

void ft_is_negative(int n)
{
	if (n>=0)
		ft_putchar('P');
	else
		ft_putchar('N');
}

void	ft_print_comb(void)
{
	int	numbers[3] = {48, 48, 48};

	while (numbers[0] <= 57)
	{
		if ((numbers[0] < numbers[1]) && (numbers[1] < numbers[2]))
		{
			ft_putchar(numbers[0]);
			ft_putchar(numbers[1]);
			ft_putchar(numbers[2]);
			if (numbers[0] != 55)
				ft_putchar(',');
			if (numbers[0] != 55)
				ft_putchar(' ');
		}
		if (numbers[2]++ >= 57)
		{
			numbers[2] = 48;
			numbers[1]++;
		}
		if (numbers[1] == 58)
		{
			numbers[1] = 48;
			numbers[0]++;
		}
	}
}

void	ft_print_comb2(void)
{
	int	numbers[4] = {48, 48, 48, 48};

	while ((numbers[0] <= 57) && (numbers[1] <= 57))
	{
			ft_putchar(numbers[0]);
			ft_putchar(numbers[1]);
			ft_putchar(' ');
			ft_putchar(numbers[2]);
			ft_putchar(numbers[3]);
			if ((numbers[0] != 57) || (numbers[1] != 57) || (numbers[2] != 57) || (numbers[3] != 57) )
			{
				ft_putchar(' ');
				ft_putchar(',');
				ft_putchar(' ');
			}

		if (numbers[3]++ >= 57)
		{
			numbers[3] = 48;
			if (numbers[2]++ >= 57)
			{
				numbers[2] = 48;
				if (numbers[1]++ >= 57)
				{
					numbers[1] = 48;
					numbers[0]++;
				}
			}
		}
	}
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
	while ((temp /= 10) > 0) 	/*on divise le nombre par 10 et on test si il est plus gand que 0*/
		size *= 10;		/*on multiplie la taille par 10, ceci détermine le nombre de caracatère du nombre size =10000 donc 5caractères*/
	temp = nb;			/*on remet le nombre dans la variable temp*/
	while (size)
	{
		ft_putchar((char)((temp / size)) + 48); /*on divise le nombre par sa taille, dans notre exemple 12447/10000 pour afficher le premier chiffre du nombre */
		temp %= size; 				/*on remplace le nombre par le reste de la division du nombre par la taille 12447mod10000=2447 */
		size /= 10;				/*on réduit la taille*/
	}
}
