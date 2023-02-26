// Find the element in the give binary search

#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int k)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == k)
        {
            return mid;
        }

        if (k > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1; // -1 is for , when element is not present in the arr then it print -1
}

int main()
{
    int array[8] = {12, 23, 34, 45, 56, 67, 78, 89}; // Elements in array
    cout << "The Index number of 45 is:" << binarySearch(array, 8, 45);

    return 0;
}