/**
 * @Author: Coléry David
 * @Date:   22/10/2017  07:28:59
 * @Email:  thebabyboom@gmail.com
 * @Filename: ft_atoi.c
 * @Last modified by:   Coléry David
 * @Last modified time: 22/10/2017  08:57:27
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int ft_atoi(char *str);

void main ()
{
  int nbr=0;
  char *str2="-12ad235";
  //printf("%d\n",atoi(str));
  printf("%d\n",atoi(str2));
  nbr = ft_atoi(str2);
  printf("%d\n",nbr);
}

int ft_atoi(char *str)
{
  int negative=0;
  int nbr=0;
  int i=0;

  while (str[i] != '\0')
	{
    if (str[i]==45)
      negative=1;
    if (str[i] == 45 || str[i] == 43)
      i++;

    while (str[i]>=48 && str[i]<=57)
    {
      nbr=nbr*10;
      nbr=nbr+(str[i]-48);
      i++;
    }
    if (!(str[i]>=48 && str[i]<=57))
      i++;
  }
  if (negative==1)
    return(-nbr);
  else
    return(nbr);
}
