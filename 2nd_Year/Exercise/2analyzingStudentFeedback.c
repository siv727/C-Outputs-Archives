#include <stdio.h>

int freq(int rating, int arr[], int size);

int main()
{
    int size, ratingCt;
    printf("Enter n: ");
    scanf("%d", &size);

    int ratingArr[size];
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++)
        scanf("%d", &ratingArr[i]);

    printf("Rating to count: ");
    scanf("%d", &ratingCt);

    printf("FREQUENCY = %d", freq(ratingCt, ratingArr, size));
    return 0;
}

int freq(int rating, int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == rating)
            count++;
    }
    return count;
}