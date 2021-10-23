#include <stdio.h>

void insertion_sort(int arr[], int n);

int main()
{
    int A[] = {5, 4, 2, 3, 1};
    int n = sizeof(A)/sizeof(A[0]);
    int i;

    printf("Unsorted array: ");
    for(i = 0; i < n; i++)
        printf("%d ", A[i]);

    insertion_sort(A, n);
    printf("\n\nSorted array: ");
    for(i = 0; i < n; i++)
        printf("%d ", A[i]);


    return 0;
}

// insertion sort function
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
