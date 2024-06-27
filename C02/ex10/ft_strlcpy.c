
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	count;

	count = 0;
	while (src[count])
	{
		count++;
	}
	if (size == 0)
	{
		return (count);
	}
	for (i = 0; src[i] && i < size - 1; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (count);
}


// int main()
// {
// 	char arr1[]="Behnam";
// 	char arr2[]="";
// 	int n=5;
// 	ft_strlcpy(arr2,arr1,n);
// 	printf("%s",arr2);
// 	return (0);
// }