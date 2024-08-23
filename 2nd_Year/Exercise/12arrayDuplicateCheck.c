#include <stdio.h>

int arrDupe(int arr[], int size);

int main()
{
    int size = 10, arr[size];
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    (arrDupe(arr, size) == 1) ? printf("Duplicate found") : printf("No duplicates");
    return 0;
}

int arrDupe(int arr[], int size)
{
    int dupe = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            printf("%d %d\n", arr[i], arr[j]);
            if (arr[i] == arr[j])
            {
                dupe = 1;
                return dupe;
            }
        }
    }
    return dupe;
}