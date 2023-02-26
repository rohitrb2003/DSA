#include<iostream>
#include<vector>
using namespace std;

// Displaying vector Part
void display(vector <int> &v ){
    for(int i= 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void printArray(vector <int>&v , int size){
    for(int i = 0; i<size; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

// Selection Sorting Part
void selectionSort(vector <int> &v , int size ){
    for(int i= 0; i < v.size() - 1 ; i++){
        int minIndex = i;
        for( int j = i + 1 ; j<v.size(); j++){
            if(v[j]<v[minIndex]){
                minIndex = j;
                swap(v[minIndex],v[i]);
            }
        }
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

//  Main function 
int main(){
    vector<int> v;
    int element , size;
    cout<<"Enter the size :";
    cin>>size;
    for(int i = 0; i<size; i++){
        cout<<"Enter the element :";
        cin>> element;
        v.push_back(element);
    }
    display(v);
                                   
    selectionSort(v,size); // printing elements using selectionsort

    printArray(v,size); // printing elements using printArray function

    return 0;
}

