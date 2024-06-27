#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;

	if(n<=0)
	{
		return (0);
	}
	while(s1[i] == s2[i] && s1[i] != '\0' && i < n - 1)
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
// 	char arr1[]="bej";
// 	char arr2[]="beh";
// 	int size=2;
// 	int a = ft_strncmp(arr1,arr2,size);
// 	printf("%i",a);
// 	return (0);
// }