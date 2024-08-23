#include <stdio.h>

void range(int arr[], int size, int start, int end);

int main()
{
    int size, x, y;
    printf("Enter n: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Values of x and y: ");
    scanf("%d %d", &x, &y);

    range(arr, size, x, y);
    return 0;
}

void range(int arr[], int size, int start, int end)
{
    int numPresent = 0;
    printf("Numbers in between = ");
    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= start && arr[i] <= end)
        {
            printf("%d ", arr[i]);
            numPresent = 1;
        }
    }

    if (numPresent == 0)
        printf("(none)");
}