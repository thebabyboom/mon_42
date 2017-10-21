/**
 * @Author: Coléry David <Babyboom>
 * @Date:   21/10/2017  03:11:26
 * @Email:  thebabyboom@gmail.com
 * @Filename: ft_strlen.c
 * @Last modified by:   Babyboom
 * @Last modified time: 21/10/2017  03:19:56
 */
#include <unistd.h>

int ft_putchar(char c);
void ft_putnbr(int nb);

int ft_strlen(char *str);

void main()
{
    char *str=
    str="chaine";
    int i = ft_strlen(str);
    ft_putnbr(i);
    ft_putchar('\n');
    ft_putnbr(ft_strlen("chainedecaracteres"));
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
int ft_strlen(char *str)
{
  int i=0;
  while(str[i] != '\0')
  {
    i++;
  }
  return(i);
}
