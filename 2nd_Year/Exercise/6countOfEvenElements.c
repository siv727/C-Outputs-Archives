#include <stdio.h>

int evenCount(int arr[], int size);

int main()
{
    int arr[12];
    printf("Enter 12 integers:\n");
    for (int i = 0; i < 12; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Number of even elements: %d", evenCount(arr, 12));
    return 0;
}

int evenCount(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
            count++;
    }
    return count;
}