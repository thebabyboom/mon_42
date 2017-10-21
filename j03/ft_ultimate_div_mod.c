/**
 * @Author: Coléry David <Babyboom>
 * @Date:   20/10/2017  10:04:55
 * @Email:  thebabyboom@gmail.com
 * @Filename: ft_ultimate_div_mod.c
 * @Last modified by:   Babyboom
 * @Last modified time: 21/10/2017  02:35:40
 */



void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}
