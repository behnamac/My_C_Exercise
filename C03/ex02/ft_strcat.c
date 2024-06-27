
#include <stdio.h>

char    *ft_strcat(char *dest, char *src)
{
        char    *dest_end;

        dest_end = dest;
        while (*dest_end != '\0')
        {
                dest_end++;
        }
        while (*src != '\0')
        {
                *dest_end = *src;
                dest_end ++;
                src ++;
        }
        *dest_end = '\0';
        return (dest);
}

int main()
{
	char arr1[20]="dfdsfds";
	char arr2[]="fdsfdsf";
	ft_strcat(arr1,arr2);
	printf("%s",arr1);
	return (0);
}