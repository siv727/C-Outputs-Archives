#include <stdio.h>

int secondMax(int arr[], int size);

int main()
{
    int size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The second largest element is %d", secondMax(arr, size));
    return 0;
}

int secondMax(int arr[], int size)
{
    int max = arr[0], maxTwo = 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            maxTwo = max;
            max = arr[i];
        }
        else if (arr[i] > maxTwo && arr[i] != max)
        {
            maxTwo = arr[i];
        }
    }
    return maxTwo;
}