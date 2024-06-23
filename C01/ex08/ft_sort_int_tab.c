#include <unistd.h>
#include <stdio.h>

void f_print(char c)
{
	write(1,&c,1);
}

void f_converter(int a)
{
	char c;
	c = '0' + a;
	f_print(c);
}

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // pivot
    int i = (low - 1); // Index of smaller element
    int j = low;

    while (j <= high - 1) {
        if (arr[j] < pivot) {
            i++; // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
        j++;
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSortRecursive(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSortRecursive(arr, low, pi - 1);
        quickSortRecursive(arr, pi + 1, high);
    }
}

void ft_sort_int_tab(int *tab, int size)
{
    if (size > 1) {
        quickSortRecursive(tab, 0, size - 1);
    }
}

void printArray(int arr[], int size) {
    int i = 0;
    while (i < size) {
        f_converter(arr[i]);
        i++;
    }
    f_print('\n');
}
// int main() {
//     int arr[] = {10, 7, 8, 9, 1, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     printf("Unsorted array: \n");
//     printArray(arr, n);
//     ft_sort_int_tab(arr, n);
//     printf("Sorted array: \n");
//     printArray(arr, n);
//     return 0;
// }




