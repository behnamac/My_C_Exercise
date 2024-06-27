
#include <stdio.h>
#include <string.h>
char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *temp_dest;

	temp_dest=dest;
	while(*temp_dest!='\0')
	{
		temp_dest++;
	}
	while(*src !='\0' && 0 < nb)
	{
		*temp_dest=*src;
		temp_dest++;
		src++;
		nb--;
	}
	*temp_dest='\0';
	
	return (dest);
}
int main()
{
	char arr1[20]="Behnam";
	char arr2[]="Game2developer";
	int n=5;
	ft_strncat(arr1,arr2,n);
	//strncat(arr1,arr2,n);
	printf("%s\n",arr1);
	return (0);
}