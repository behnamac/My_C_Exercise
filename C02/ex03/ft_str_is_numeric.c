#include <stdio.h>

int ft_str_is_numeric(char *str)
{	
	unsigned int i;

	i = 0;
	while(str[i]!='\0')
	{
		if(str[i]>='0'&&str[i]<='9')
		{
			i++;
		}
		else
		{
			return(0);
		}
	}
	return (1);
}
// int main()
// {
// 	char arr[20]="95A8";
// 	int a=ft_str_is_numeric(arr);
// 	printf("%i",a);
// 	return (0);
// }
