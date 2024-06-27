#include <unistd.h>

void f_print(char c)
{
	write(1, &c, 1);
}

void converter(int i)
{
	char c;
	char new_line='\n';
	c='0';
	if(i>9)
	{
		int dahgan=i/10;
		c='0'+dahgan;
		f_print(c);
		c='0';
		int yekan=i%10;
		c='0'+yekan;
		f_print(c);
	}
	else
	{
			c='0'+i;

		f_print(c);
	}
	f_print(new_line);
}

void fizz()
{
	char new_line='\n';

 	char *c="fizz";
 	while(*c !='\0')
 	{
		f_print(*c);
		c++;
 	}
		f_print(new_line);

}
void buzz()
{
		char new_line='\n';

	char *c="buzz";
 	while(*c !='\0')
 	{
		f_print(*c);
		c++;
 	}
		f_print(new_line);

}
void fizzbuzz()
{
		char new_line='\n';

	char *c="fizzbuzz";
 	while(*c !='\0')
 	{
		f_print(*c);
		c++;
 	}
		f_print(new_line);


}

void fizzbuzzCheck()
{
	int i;

	i = 0;
	while(i<=100)
	{
		if(i%3==0 && i%5==0)
		{
			fizzbuzz();
		}
		else if(i%3==0)
		{
			fizz();		
		}
		else if(i%5==0)
		{
			buzz();		
		}
		else
		{
			converter(i);
		}
		i++;
	}
}
int main()
{

	fizzbuzzCheck();
	f_print('\n');
	return (0);
}