#include <stdio.h>
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return(1);
}
// int main()
// {
// 	char arr[]="fdsgf";
// 	int a=ft_str_is_uppercase(arr);
// 	printf("%i",a);
// 	return (0);
// }