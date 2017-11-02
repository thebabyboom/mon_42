/**
 * @Author: Coléry David
 * @Date:   01/11/2017  05:25:07
 * @Email:  thebabyboom@gmail.com
 * @Filename: ft_sqrt.c
 * @Last modified by:   Coléry David
 * @Last modified time: 02/11/2017  09:22:45
 */

#include <unistd.h>
#include <stdio.h>

int ft_sqrt(int nb);

void main()
{
  int res=0;
  res=ft_sqrt(143);
  printf("%d\n",res);
}

int ft_sqrt(int nb)
{
  int i=0;
  int res=0;
  do {
    res=i*i;
    if (res==nb)
      return i;
    else
      if (res<nb)
        i++;
      else
        return 0;
  } while(res != nb);
}
