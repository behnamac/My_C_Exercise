
#include <stdio.h>
#include <unistd.h>

void f_printer(char c)
{
	write(1, &c,1);
}

void alphabetCheck(int c)
{
	int delta;
	int dest;
	delta = 0;
	dest=65;
	if (c>=65 && c<=90)
	{
		 delta = c -65;
		dest= 90-delta;
		f_printer(dest);
	}
	else if (c>=97 && c<=122)
	{
		delta = c -97;
		dest= 122-delta;
		f_printer(dest);
	}
}

int main(int arg, char **argv)
{
	int i;

	i=0;	
	if(arg==2)
	{
		while(argv[1][i])
		{
			alphabetCheck(argv[1][i]);
			i++;
		}
	}

	return (0);
}
