#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int i;

	i = *a;
	*a = i / *b;
	*b = i %  *b;
}
// int main()
// {
// 	int a=5;
// 	int b=3;
// 	ft_ultimate_div_mod(&a,&b);
// 	printf("%d\n%d\n",a,b);
// 	return (0);
// }






