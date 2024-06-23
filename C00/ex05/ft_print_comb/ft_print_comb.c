#include <unistd.h>

void ft_print(char c)
{	
	write(1,&c,1);
}

void ft_converter(char i,char j, char k)
{
	ft_print(i+'0');
	ft_print(j+'0');
	ft_print(k+'0');
	ft_print(',');
	ft_print(' ');

}


void ft_print_comb()
{
int i,j,k;
i=0;
j=0;
k=0;
while(i<=9)
{
	j=i+1;
	while(j<=9)
	{
		k=j+1;
		while(k<=9)
		{
			ft_converter(i,j,k);	
			k++;
		}
		j++;
	}
	i++;
}


}

int main()
{
	ft_print_comb();
	return (0);
}






