#include <stdio.h>

void fill(int arr[], int size);

int main()
{
    int size;
    printf("Enter n: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    fill(arr, size);
    return 0;
}

void fill(int arr[], int size)
{
    int gap = 0;
    printf("Filling in gaps = ");
    for (int i = 0, numFill = arr[0]; i < size; numFill++)
    {
        if (numFill != arr[i])
        {
            printf("%d ", numFill);
            gap = 1;
        }
        else
        {
            i++;
            continue;
        }
    }
    if (gap == 0)
        printf("(none)");
}