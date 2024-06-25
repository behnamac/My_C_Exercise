#include <stdio.h>
#include <stdlib.h>


void ft_sort_int_tab(int *tab, int size)
{
	int i = 0;
	int spwapped = 1;
	int temp;

	while(spwapped)
	{
		i=0;
		spwapped = 0;
		while(i<size-1)
		{
			if(tab[i]>tab[i+1])
			{
				temp = tab[i];
				tab[i] = tab[i+1];
				tab[i+1] = temp;
				spwapped = 1;
			}
			i++;
		}
		size--;
	}
	
}

void printArray(int *arr, int size) {
    int i = 0;
    while (i < size) {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted array: \n");
    printArray(arr, n);

    ft_sort_int_tab(arr, n);

    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}




