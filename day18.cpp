// question - sort the given array using selection sort
#include <iostream>
#include <vector>
using namespace std;
int selectionsort(int arr[] , int n){
    for(int i=0;i<n-1;i++){
        int smallestidx=i;
        for(int j=i+1;j<n;j++){
        if(arr[i]<arr[smallestidx]){
            smallestidx=j;
        }
        }
        swap(arr[i],arr[smallestidx]);
    }
}
void printarr(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"";
    }
}
int main(){
    int arr[]={4,1,5,2,3};
    int n;
    selectionsort(arr,n);
    printarr(arr,n);

    return 0;
}