// question - find peak element in mountain array
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int arr[] = {0,3,8,9,5,2};
    int st=0,end=sizeof(arr);
    int mid = end+(st-end)/2;
    while(st<=end){
        if(arr[mid-1]<arr[mid] && arr[mid+1]<arr[mid]){
            return mid;
        }
        else if(arr[mid-1]<arr[mid]){
            st = mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return 0;
}