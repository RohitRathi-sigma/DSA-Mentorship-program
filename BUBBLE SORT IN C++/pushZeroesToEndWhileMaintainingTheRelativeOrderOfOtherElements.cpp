#include <iostream>

int main()
{
    int arr[] = {0,1,4,0,3,7,0};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original Array: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Two-pointer approach to push zeroes to end
    int j = 0; // Pointer to track non-zero elements

    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            arr[j] = arr[i];
            j++;
        }
    }

    // Fill the remaining elements with zeroes
    while (j < size)
    {
        arr[j] = 0;
        j++;
    }

    std::cout << "Array after pushing zeroes to end: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}