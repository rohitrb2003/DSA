/*
Positive  OR  Negative  OR  0  
*/
#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the value of A:";
    cin>>a;

    if (a>0)
    {
        cout<<"A is Positve";
    }
    else if (0>a)
    {
        cout<<"A is Negative";
    }
    else{
        cout<<"A is 0";
    }
    return 0;
}