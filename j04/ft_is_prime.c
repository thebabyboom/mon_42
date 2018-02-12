/**
 * @Author: Coléry David
 * @Date:   02/11/2017  09:25:02
 * @Email:  thebabyboom@gmail.com
 * @Filename: ft_is_prime.c
 * @Last modified by:   Coléry David
 * @Last modified time: 15/11/2017  03:18:15
 */

 #include <unistd.h>
 #include <stdio.h>

 int ft_is_prime(int nb);

 void main()
 {
   int res=0;
   res=ft_is_prime(15);
   printf("%d\n",res);
 }

 int ft_is_prime(int nb)
 {
   int i=2;
   while(i<=nb-1)
   {
     if(nb % i)
        return 1;
     else
        return 0;
     i++;
   }

 }
