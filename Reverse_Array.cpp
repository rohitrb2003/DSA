// Reverse the given array

#include<iostream>
using namespace std;

void reverse(int arr[], int n){
    int start = 0;
    int end = n-1;
    while(start <= end){
        swap(arr[start],arr[end]);
        start ++;
        end --;
    }
}

void printArray(int arr[], int n){
    cout<<"Reversed array is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr1[6]={1,4,0,5,-2,15};
    reverse(arr1,6);
    printArray(arr1,6);

    int arr[5]={2,6,3,9,4};    
    reverse(arr,5);
    printArray(arr,5);

    return 0;
}