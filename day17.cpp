// question - sort a given array using bubble sort 
#include <iostream>
#include <vector>
using namespace std;
int bubblesort(int arr[], int n){
 for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }

    }
 }
}
void printarr(int arr[] , int n){
 for(int i=0;i<n;i++){
    cout<<arr[i]<<"";
 }
}
int main(){
    int arr[] = {4,1,5,2,3};
    int n = sizeof(arr);
    bubblesort(arr, n);
    printarr(arr,n);

    return 0;
}