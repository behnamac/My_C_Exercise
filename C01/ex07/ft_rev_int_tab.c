#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int start = 0;
	int end = size - 1;
	int temp;

	while (start <= end && tab!=0)
	{
		temp=tab[start];
		tab[start]=tab[end];
		tab[end]=temp;
		start++;
		end--;
	}
}
// int main()
// {
// 	int arr[] = {1,5,7,9};
// 	ft_rev_int_tab(arr,4);
// 	printf("%d\n",*arr);
// 	return (0);
// }






