#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of N:";
    cin>>n;

    int i = 0;
    int sum = 0;

    while(i<=n){
        i = i + 2;
        sum = sum + n;
       
    }
    cout<<"Sum of Even Number's:"<<sum<<endl;

    return 0;
}