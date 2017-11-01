/**
 * @Author: Coléry David
 * @Date:   01/11/2017  12:14:56
 * @Email:  thebabyboom@gmail.com
 * @Filename: ft_recursive_power.c
 * @Last modified by:   Coléry David
 * @Last modified time: 01/11/2017  12:46:23
 */
 #include <unistd.h>
 #include <stdio.h>

 int ft_recursive_power(int nb, int power);

 void main()
 {
   int res=0;
   res=ft_recursive_power(5,4);
   printf("%d\n",res);
 }

 int ft_recursive_power(int nb, int power)
 {
   int res=1;
   if (power>=0)
   {
     if(power>0)
     {
       res=nb;
       res=res*ft_recursive_power(nb,power-1);
     }
     return(res);
   }
   else
   {
     res=0;
     return(res);
   }
 }
