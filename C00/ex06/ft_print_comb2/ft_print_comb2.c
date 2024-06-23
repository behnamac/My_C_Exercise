#include <unistd.h>

void	print_char(char c)
{
	write(1,&c,1);
}

void	int_to_char(int a)
{
	char c;
	int ones;
	int tones;
	if(a<=9)
	{
		print_char('0');
		c='0'+a;
		print_char(c);
	}
	else
	{
		tones=a/10;
		c='0'+tones;
		print_char(c);
		ones=a%10;
		c='0'+ones;
		print_char(c);
	}

}
void	ft_print_comb2(void)
{
	int i,j;
	while(i<=99)
	{
		j=i+1;
		while(j<=99)
		{
			int_to_char(i);
			print_char(' ');
			int_to_char(j);
			if (i < 98)
			{
				print_char(',');
				print_char(' ');
			}
			j++;
		}
		i++;
	}
}

int main()
{
	ft_print_comb2();
	return (0);
}






