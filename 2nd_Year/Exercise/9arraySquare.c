#include <stdio.h>

void square(int arr[], int size);

int main()
{
    int size = 5, arr[size];
    printf("Enter 5 integers:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    square(arr, size);

    printf("Square of all elements:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

void square(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] *= arr[i];
    }
}