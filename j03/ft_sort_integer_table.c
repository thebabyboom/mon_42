/**
 * @Author: Coléry David
 * @Date:   23/10/2017  07:52:25
 * @Email:  thebabyboom@gmail.com
 * @Filename: ft_sort_integer_table.c
 * @Last modified by:   Coléry David
 * @Last modified time: 23/10/2017  08:44:02
 */

#include <unistd.h>
#include <stdio.h>

void ft_sort_integer_table(int *tab, int size);

void main ()
{
  int tab[10]={20,9,51,34,150,5,64,31,65,4};
  int i=0;
  for (i=0; i<10; i++)
  {
    printf ( " %d ",tab[i]);
  }
  printf("\n");
  ft_sort_integer_table(tab,10);
}

void ft_sort_integer_table(int *tab, int size)
{
  int tmp=0, i=0, pass =0;
  do {
    for (i=0; i<size; i++)
    {
      if(tab[i]>tab[i+1] && i<size-1)
      {
        tmp=tab[i];
        tab[i]=tab[i+1];
        tab[i+1]=tmp;
      }
    }
    pass++;
  } while(pass<size);
  for (i=0;i<size;i++)
  {
    printf ( " %d ",tab[i]);
  }
}
