#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v;
    int element, size;
    cout << "Enter the size of your vector :";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element in the vector :";
        cin >> element;
        v.push_back(element);
    }

    display(v);

    return 0;
}