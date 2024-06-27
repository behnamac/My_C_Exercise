#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
	unsigned int i;

	i = 0;

	while(s1[i]==s2[i] && s1[i]!='\0')
	{			
		i++;
	}
	if (s1[i]==s2[i])
	{
		return (0);
	}	
	
	return (s1[i]-s2[i]);
}
// int main()
// {
// 	char arr1[]="";
// 	char arr2[]="Se";
// 	int size=5;
// 	int a = ft_strcmp(arr1,arr2);
// 	printf("%i",a);
// 	return (0);
// }