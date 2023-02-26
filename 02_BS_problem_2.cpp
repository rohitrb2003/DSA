// Find the total numbers of occurance of element
// Findthe first occurance and the last occurance (left most index and right mist index)

#include<iostream>
using namespace std;

int firstOcc(int arr[],int n, int key){
    int s =0;
    int e =n-1;
    int mid = s+(e-s)/2;
    int ans = -1;

    while (s<=e)
    {
        if(key==arr[mid]){
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid+1;
        }
        else if (key < arr[mid])
        {
            e = mid-1;
        }
        
        mid = s + (e-s)/2;
    }
    return ans;
}
int lastOcc(int arr[],int n, int key){
    int s =0;
    int e =n-1;
    int mid = s+(e-s)/2;
    int ans = -1;

    while (s<=e)
    {
        if(key==arr[mid]){
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        {
            s = mid+1;
        }
        else if (key < arr[mid])
        {
            e = mid-1;
        }
        
        mid = s + (e-s)/2;
    }
    return ans;
}


int main(){
    int even[12]={12,23,88,88,88,88,88,88,88,89,90,92};

    cout<<"Index number of 88 is: "<<firstOcc(even,12,88)<<endl;
    cout<<"Index number of 88 is: "<<lastOcc(even,12,88)<<endl;

    int totalNoOcc = (lastOcc(even,12,88) - firstOcc(even,12,88)) + 1; 
    cout<<" Total Number's of Occurance = "<<totalNoOcc<<endl;
    return 0;
}