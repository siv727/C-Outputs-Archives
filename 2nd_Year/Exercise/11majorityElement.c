// The solution is not final as sample outputs have been obscured
#include <stdio.h>

int majorElement(int arr[], int size);

int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array separated by space: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int majorityElement = majorElement(arr, size);
    if (majorityElement == 0)
        printf("No majority element found");
    else
        printf("The majority element is %d", majorityElement);
    return 0;
}

int majorElement(int arr[], int size)
{
    int element = arr[0], count, majElement = 0, majCount = 0, freq = size / 2;
    for (int i = 0; i < size; i++)
    {
        count = 0;
        for (int j = i; j < size; j++)
        {
            if (arr[j] == element)
                count++;
        }
        if (count > freq && count != majCount)
        {
            majCount = count;
            majElement = element;
        }
        element = arr[i + count];
        i += count - 1;
    }
    return majElement;
}