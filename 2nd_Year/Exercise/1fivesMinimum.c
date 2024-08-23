#include <stdio.h>

int min(int arr[]);

int main()
{
    int size = 5;
    int arr[size];
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    printf("The minimum value is: %d", min(arr));
    return 0;
}

int min(int arr[])
{
    int smallest = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (smallest > arr[i])
            smallest = arr[i];
    }
    return smallest;
}