/* Peak index of a mountain Array


Input : 0-2-0
Output: 
  2
 / \
0   0
peak element index is 1.
*/

#include<iostream>
#include<vector>
using namespace std;

// class solution{
//     public:
    int peakInMountaInArray(int arr[], int size){
        int s =0;
        int e = size - 1;
        int mid = s + (e - s)/2;

        while(s<e){
            if(arr[mid]<arr[mid+1]){
                s = mid + 1;
            }
            else
            {
                e = mid;
            }
            mid = s + (e-s)/2;
        }
        return s;
    }
// };

int main(){
    int array[3]={0,2,0};
    cout<<"Index number if peak element :"<<peakInMountaInArray(array,3); // this print the index number of peak element.
    return 0;
}