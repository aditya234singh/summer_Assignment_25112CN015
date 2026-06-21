// question - check if the array is sorted
#include <iostream>
#include <vector>
using namespace std;
bool issorted(int arr[],int n){
    if(n==0 || n==1){
        return true;
    }
    return arr[n-1] >= arr[n-2] && issorted(arr,n-1);
}
int main(){
    int arr[] ={1,3,5,7,9};
    int n=sizeof(arr);
    issorted(arr,n);
    return 0;
}