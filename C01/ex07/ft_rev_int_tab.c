#include <stdio.h>
#include <unistd.h>

void f_print(char c)
{
	write(1,&c,1);
}
void f_converter(int a)
{
	char c;

	c = '0'+ a;
	f_print(c);
}
void	ft_rev_int_tab(int *tab, int size)
{
	unsigned int i;

	i=size-1;
	while(i>0&& *tab!='\0')
	{
		f_converter(tab[i]);
		tab++;
		i--;
	}
	tab[size]='\0';
	
}
// int main()
// {
// 	int arr[]={1,5,7,9};
// 	ft_rev_int_tab(arr,4);
// 	return (0);
// }






