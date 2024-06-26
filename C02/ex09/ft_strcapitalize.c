
#include <stdio.h>
#include <string.h>

char	*ft_strcapitalize(char *str)
{
	int isCapitalLetter;
	int i;

	i = 0;
	isCapitalLetter = 1;
	while(str[i]!='\0')
	{
		if((isCapitalLetter == 1) && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
		}
		else if (isCapitalLetter == 0 && (str[i] >= 'A' && str[i]<='Z'))
		{
			str[i] += 32;
		}
		if((str[i]<'0') || (str[i]>'9' && str[i]<'A') || (str[i]>'Z' && str[i] < 'a') || (str[i]>'z'))
		{
			isCapitalLetter=1;
		}
		else
		{
			isCapitalLetter = 0;
		}
		i++;
	}
	return (str);
}

// int main()
// {
// 	//char arr[]="sAlUHGt, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
// 	char arr[]="a1b2c3d4e5f6g7h8i9j0";

// 	ft_strcapitalize(arr);
// 	printf("%s",arr);
// 	return (0);
// }

