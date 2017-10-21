/**
 * @Author: Coléry David
 * @Date:   21/10/2017  04:30:37
 * @Email:  thebabyboom@gmail.com
 * @Filename: ft_strrev.c
 * @Last modified by:   Coléry David
 * @Last modified time: 21/10/2017  10:14:49
 */

#include <unistd.h>
int ft_putchar(char c);
void ft_putstr(char *str);
char *ft_strrev(char *str);
void	ft_putnbr(int nb);

void main()
{
   char *str=
   str="chaine";
   ft_putstr(str);
   ft_putchar('\n');
   ft_putstr(ft_strrev(str));
   ft_putchar('\n');
   ft_putstr(ft_strrev("chaine de caracteres"));
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
  int   i;

	counter = 0;
	size_str = 0;
  i=0;
	while (str[size_str])
		size_str++;
  i=size_str-1;
  char	temp[size_str];
	while (counter < size_str)
	{
    temp[counter] = str[i];
    counter++;
		i--;
	}
  temp[counter]=str[counter];
  str=temp;
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
