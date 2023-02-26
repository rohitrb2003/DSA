// Accessing array with a function :

#include <iostream>
using namespace std;

// Function
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << "Printing Done ('_')";
}
// Main Function
int main()
{
    int array[5] = {12, 13, 23, 45, 67};
    printArray(array, 5);

    return 0;
}