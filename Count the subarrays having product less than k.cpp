#include <iostream>
using namespace std;

int countsubarray(int array[], int n, int k)
{
    int count = 0;
    int i, j, mul;

    for (i = 0; i < n; i++) {
        // Counter for single element
        if (array[i] < k)
            count++;

        mul = array[i];

        for (j = i + 1; j < n; j++) {
            // Multiple subarray
            mul = mul * array[j];
            // If this multiple is less
            // than k, then increment
            if (mul < k)
                count++;
            else
                break;
        }
    }

    return count;
}

// Driver Code
int main()
{
    int array[] = { 1, 2, 3, 4 };
    int k = 10;
    int size = sizeof(array) / sizeof(array[0]);
    int count = countsubarray(array, size, k);
    cout << count << "\n";
}