
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (src[count])
		count++;
	if (size < 1)
		return (count);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
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