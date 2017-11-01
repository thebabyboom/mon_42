/**
 * @Author: Coléry David
 * @Date:   01/11/2017  11:21:36
 * @Email:  thebabyboom@gmail.com
 * @Filename: ft_recursive_factorial.c
 * @Last modified by:   Coléry David
 * @Last modified time: 01/11/2017  11:31:36
 */

#include <unistd.h>
#include <stdio.h>

int ft_recursive_factorial(int nb);

void main()
{
  int res=0;
  res=ft_recursive_factorial(12);
  printf("%d\n", res);
}

int ft_recursive_factorial(int nb)
{
  int res=0;
  if(nb>1)
  {
    res=nb*ft_recursive_factorial(nb-1);
    return(res);
  }
  else
  {
    res=nb;
    return(res);
  }
}
