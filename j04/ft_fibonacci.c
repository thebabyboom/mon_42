/**
 * @Author: Coléry David
 * @Date:   01/11/2017  01:04:45
 * @Email:  thebabyboom@gmail.com
 * @Filename: ft_fibonacci.c
 * @Last modified by:   Coléry David
 * @Last modified time: 01/11/2017  01:22:04
 */
 #include <unistd.h>
 #include <stdio.h>

 int ft_fibonacci(int index);

 void main()
 {
   int res=0;
   res=ft_fibonacci(10);
   printf("%d\n",res);
 }

int ft_fibonacci(int index)
{
  int res;

  if (index<0)
    res=-1;
  else
  {
    if(index==0)
      res=0;
    else
    {
      if(index==1 || index==2)
      {
        res=1;
      }
      else
      {
        res=ft_fibonacci(index-1)+ft_fibonacci(index-2);
      }
    }
  }
  return(res);
}
