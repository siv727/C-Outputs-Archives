#include <stdio.h>

int max(int arr[], int size);

int main()
{
    int arr[7];
    printf("Enter 7 integers:\n");
    for (int i = 0; i < 7; i++)
        scanf("%d", &arr[i]);
    printf("The maximum value is: %d", max(arr, 7));
    return 0;
}

int max(int arr[], int size)
{
    int largest = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (largest < arr[i])
            largest = arr[i];
    }
    return largest;
}