#include <stdio.h>
#include <string.h>

char *ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i]>='a' && str[i]<='z')
		{
			str[i]-=32;
		}
		i++;
	}
	return(str);
}
// int main()
// {
// 	char arr[]="sfd@fF";
// 	ft_strupcase(arr);
// 	printf("%s",arr);
// 	return (0);
// }