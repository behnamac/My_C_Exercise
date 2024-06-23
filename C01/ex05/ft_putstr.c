#include <stdio.h>
#include <unistd.h>

void f_print(char c)
{
	write(1,&c,1);
}
void	ft_putstr(char *str)
{
	unsigned int i;

	i = 0;
	while(str[i]!='\0')
	{
		f_print(str[i]);
		i++;		
	}	
}
// int main()
// {
// 	char arr[]="Behnam";
// 	ft_putstr(arr);
// 	return (0);
// }






