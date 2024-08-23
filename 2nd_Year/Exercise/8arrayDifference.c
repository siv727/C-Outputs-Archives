#include <stdio.h>

int arrDiff(int arr[], int size);

int main()
{
    int arr[5];
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Difference of all elements: %d", arrDiff(arr, 5));
    return 0;
}

int arrDiff(int arr[], int size)
{
    int diff = 0;
    for (int i = 0; i < size; i++)
    {
        diff -= arr[i];
    }
    return diff;
}