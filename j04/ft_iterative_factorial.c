/**
 * @Author: Coléry David
 * @Date:   01/11/2017  10:52:58
 * @Email:  thebabyboom@gmail.com
 * @Filename: ft_iterative_factorial.c
 * @Last modified by:   Coléry David
 * @Last modified time: 01/11/2017  11:32:44
 */

#include <unistd.h>
#include <stdio.h>

int ft_iterative_factorial(int nb);

void main()
{
  int res=0;
  res=ft_iterative_factorial(5);
  printf("%d\n",res);

}
int ft_iterative_factorial(int nb)
{
  int i=0;
  int res=0;
  if(nb>0)
  {
    res=nb;
    for (i=1;i<nb-1;i++)
    {
      res=res*(nb-i);
    }
    return res;
  }
  else
  {
    res=0;
    return (res);
  }

}
