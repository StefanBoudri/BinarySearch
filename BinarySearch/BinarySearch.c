#include <stdio.h>

static int BinarySearch(int array[], int arraySize, int n)
{
    int low = 0;
    int high = arraySize - 1;
    int count = 0;
    while (low <= high)
    {
        count++;
        int mid = low + (high - low) / 2;
        int x = array[mid];
        // Printing the values for debugging
        printf("Iteration: %d, low = %d, high = %d, mid = %d\n", count, low, high, mid);
        if (x == n)
        {
            printf("Found %d at index %d\n", x, mid);
            return 1;
            break;
        }
        else if (x > n)
        {
            high = mid - 1;
        }
        else if (x < n)
        {
            low = mid + 1;
        }
    }
    return 0;
}

void main()
{
    int orderedArray[] = {
    6, 8, 15, 23, 31, 33, 34, 39, 45, 46,
    49, 53, 56, 58, 66, 71, 72, 75, 76, 78,
    81, 82, 82, 90, 95, 98, 99, 103, 109, 111,
    111, 112, 113, 115, 115, 117, 118, 121, 127, 133,
    137, 142, 146, 149, 151, 152, 154, 158, 162, 164,
    165, 166, 167, 168, 171, 174, 177, 180, 183, 186,
    188, 193, 197, 197, 199, 200, 204, 205, 206, 210,
    214, 216, 218, 222, 224, 225, 226, 227, 229, 232,
    234, 234, 235, 235, 239, 242, 243, 244, 248, 248,
    251, 253, 254, 255, 257, 260, 263, 266, 266, 267
    };
    int sizeOfArray = sizeof(orderedArray) / sizeof(orderedArray[0]);

    int result = BinarySearch(orderedArray, sizeOfArray, 58);

    if (result = 0) 
    {
        printf("This number cannot be found in the array");
    }
}