/*
Cheking the given value is Greater OR Smaller
*/

#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the Value of A :";
    cin>>a;

    int b;
    cout<<"Enter the value of B :";
    cin>>b;

    if(a>b){
        cout<<"A is Greater than B";
    }
    else{
        cout<<"B is Greater than A";
    }
    return 0;
}