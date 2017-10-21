/**
 * @Author: Coléry David <Babyboom>
 * @Date:   21/10/2017  03:23:00
 * @Email:  thebabyboom@gmail.com
 * @Filename: ft_swap.c
 * @Last modified by:   Babyboom
 * @Last modified time: 21/10/2017  03:30:11
 */
void ft_swap(int *a, int *b);

void ft_swap(int *a, int *b)
{
  int temp=0;

  temp=*a;
  *a = *b;
  *b=temp;
}
