/*

While Loop for Printing statement like this
I Love India
I Love India
I Love India
I Love India
I Love India

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    
    int i = 1;
    while (i <= n)
    {
        cout<<"I Love India"<<endl;
        i++;
    }

    return 0;
}