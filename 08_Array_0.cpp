// ImplementationOf Array's / Accessing Array :
// 1) Accessing single element 2) Acceing a whole array

#include <iostream>
using namespace std;

int main()
{
    // Accessing a single Element.
    int first[10] = {10, 11, 20, 30, 2, 4, 24, 54, 32, 13};
    cout << "Value at 3 index is :" << first[2] << endl;

    // Accesing a whole Array.
    int second[5] = {23, 45, 12, 45, 67};
    int n = 5;
    cout << endl
         << "Printting a whole array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << second[i] << " ";
    }

    return 0;
}