/**
 * @Author: Coléry David
 * @Date:   01/11/2017  12:01:32
 * @Email:  thebabyboom@gmail.com
 * @Filename: ft_iterative_power.c
 * @Last modified by:   Coléry David
 * @Last modified time: 01/11/2017  12:10:03
 */

#include <unistd.h>
#include <stdio.h>

int ft_iterative_power(int nb, int power);

void main()
{
  int res=0;
  res=ft_iterative_power(4,3);
  printf("%d\n",res);
}

int ft_iterative_power(int nb, int power)
{
  int res=nb;
  if (power>0)
  {
    while(power>1)
    {
      res=res*nb;
      power--;
    }
    return(res);
  }
  else
  {
    res=0;
    return(res);
  }
}
