#include <stdio.h>
#include <stdlib.h>

char *ft_strcpy(char *dest, char *src)
{	
	int i;

	i=0;
	if(*src=='\0')
	{
		return dest;
	}
	while(src[i] !='\0')
	{
		dest[i] =src[i];
		i++;
	}
	dest[i]='\0';
	return (dest);
}
// int main() {
//     char arr[20]="Behnam";
//     char arr2[]="Hello ";
//     ft_strcpy(arr2, arr);
// 	printf("%s",arr2);
//     return 0;
// }

