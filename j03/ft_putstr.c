/**
 * @Author: Coléry David <Babyboom>
 * @Date:   21/10/2017  02:42:25
 * @Email:  thebabyboom@gmail.com
 * @Filename: ft_putstr.c
 * @Last modified by:   Coléry David
 * @Last modified time: 21/10/2017  05:08:12
 */
#include <unistd.h>
int ft_putchar(char c);
void ft_putstr(char *str);

void main()
{
    char *str=
    str="chaine";
    ft_putstr(str);
    ft_putchar('\n');
    ft_putstr("chainedecaracteres");
}

int ft_putchar(char c)
 {
 	write(1,&c,1);
 	return(0);
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
