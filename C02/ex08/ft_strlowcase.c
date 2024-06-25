#include <stdio.h>
#include <string.h>

char *ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			str[i]+=32;
		}
		i++;
	}
	return(str);
}
// int main()
// {
// 	char arr[]="sfFGd@fF";
// 	ft_strlowcase(arr);
// 	printf("%s",arr);
// 	return (0);
// }