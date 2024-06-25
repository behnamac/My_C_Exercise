#include <stdio.h>

int ft_str_is_alpha(char *str)
{	
	unsigned int i;

	i=0;
	while(str[i]!='\0')
	{
		if((str[i]>='a' && str[i]<='z')
			|| (str[i]>='A' && str[i]<='Z'))
		{
		 	i++;
		}
	else
		{
			return (0);
		}
	}
	return (1);

}
// int main()
// {
// 	char arr[20]="";
// 	int a=ft_str_is_alpha(arr);
// 	printf("%i",a);
// 	return (0);
// }
