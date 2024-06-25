#include <unistd.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{	
	unsigned int	i;

	i = 0;
	if(*src == '\0')
	{
		return (dest);
	}
	while(i < n && src[i] !='\0')
	{
		dest[i] = src[i];
		i++;		
	}
	while(i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
// int main() {
//     char arr[20]="Behnam";
//     char arr2[30]="Hello hgfhgfhgfhgfh";
// 		int n = 20;
//     ft_strncpy(arr2, arr,n);
// 	printf("%s",arr2);
//     return 0;
// }

