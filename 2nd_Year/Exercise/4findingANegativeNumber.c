#include <stdio.h>

int isNegative(int arr[], int size);

int main()
{
    int arr[8];
    printf("Enter 8 integers:\n");
    for (int i = 0; i < 8; i++)
        scanf("%d", &arr[i]);
    (isNegative(arr, 8)) ? printf("Negative number found") : printf("No negative numbers");
    return 0;
}

int isNegative(int arr[], int size)
{
    int negative = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            negative = 1;
            break;
        }
    }
    return negative;
}