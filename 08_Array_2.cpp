#include <iostream>
using namespace std;

// Function for minimum value.
int getMin(int num[], int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    // Return the min value;
    return min;
}

// Function for maximum value.
int getMax(int num[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    // Return the max value;
    return max;
}

int main()
{
    int size;
    cout << "Enter Size of your array:"
         << " ";
    cin >> size;

    int num[100];
    // Function for takin input.
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element :"
             << " ";
        cin >> num[i];
    }

    cout<<"Maximum Elements in array:"<<getMax(num,size)<<endl;
    cout<<"Mimimum Elements in array:"<<getMin(num,size)<<endl;

    return 0;
}
