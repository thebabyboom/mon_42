/**
 * @Author: Coléry David
 * @Date:   21/10/2017  04:30:37
 * @Email:  thebabyboom@gmail.com
 * @Filename: ft_strrev.c
 * @Last modified by:   Coléry David
 * @Last modified time: 21/10/2017  07:24:44
 */

#include <unistd.h>
int ft_putchar(char c);
void ft_putstr(char *str);
char *ft_strrev(char *str);

void main()
{
   char *str=
   str="chaine";
   ft_putstr(str);
   ft_putchar('\n');
   ft_strrev(str);
   ft_putchar('\n');
   //ft_putstr("chainedecaracteres");
}

int ft_putchar(char c)
{
	write(1,&c,1);
	return(0);
}

char *ft_strrev(char *str)
{
  int		counter;
	int		size_str;
	char	temp;

	counter = 0;
	size_str = 0;
	while (str[size_str])
		size_str++;
	size_str -= 1;
	while (counter < size_str)
	{
		temp = str[size_str];
		str[size_str] = str[counter];
		str[counter] = temp;
		counter++;
		size_str--;
	}
	return (str);
 }

 void ft_putstr(char *str)
 {
     int i=0;
     while (str[i] != '\0')
     {
       ft_putchar(str[i]);
       i++;
     }

 }
