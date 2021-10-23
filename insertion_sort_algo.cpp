#include <iostream>
#include <conio.h>
using namespace std;

void insertion_sort(int arr[], int n);

int main()
{
    int arr[] = {1, 8, 3, 5, 4, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i;

    printf("Unsorted array: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n\nSorted array: ");
    insertion_sort(arr, n);
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    getch();
}

// insertion sort func
void insertion_sort(int arr[], int n)
{
    int i, j, item;

    for(i = 1; i < n; i++)
    {
        item = arr[i];

        j = i-1;
        while(j >= 0 && arr[j] > item)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = item;
    }
}
