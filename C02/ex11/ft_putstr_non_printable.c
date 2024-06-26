#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_convert_hexa(unsigned char c)
{
	char *hexa;

	hexa="0123456789abcdef";

	if(c/16 > 0)
	{
		ft_putchar(hexa[c/16]);
		ft_putchar(hexa[c%16]);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(hexa[c]);
	}

}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while(str[i]!='\0')
	{
		if(str[i]<32 || str[i]>126)
		{
			ft_putchar('\\');
			ft_convert_hexa(str[i]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}
// int main()
// {
// 	char arr1[]="Couc43ou\0tu vas bien ?";
// 	ft_putstr_non_printable(arr1);
// 	//ft_putchar('\\');
// 	printf("%s",arr1);
// 	return (0);
// }

