#include <stdio.h>

int maxFreq(int arr[], int size);

int main()
{
    int size;
    printf("Enter n: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int freqFlyer = maxFreq(arr, size);
    if (freqFlyer == 0)
        printf("Lucky Winner = (none)");
    else
        printf("Lucky Winner = %d", freqFlyer);

    return 0;
}

int maxFreq(int arr[], int size)
{
    int element, count, freqCount = 0, freqElement = 0;
    for (int i = 0; i < size; i++)
    {
        element = arr[i];
        count = 0;
        for (int j = i; j < size; j++)
        {
            if (arr[j] == element)
                count++;
        }
        if (count > freqCount)
        {
            freqCount = count;
            freqElement = element;
        }
        else if (count == freqCount)
            freqElement = 0;
    }
    return freqElement;
}