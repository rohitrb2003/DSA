#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{

    int even[10] = {12, 24, 3, 15, 45, 34, 56, 76, 45, 2};

    cout << "Enter the number to search in Array:" << endl;
    int key;
    cin >> key;

    bool found = search(even, 10, key);
    if (found)
    {
        cout << "Key is present." << endl;
    }
    else
    {
        cout << "Key is absent." << endl;
    }

    cout<<"Elements in array : 12, 24, 3, 15, 45, 34, 56, 76, 45, 2";
    return 0;
}