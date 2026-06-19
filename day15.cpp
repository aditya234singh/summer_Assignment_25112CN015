// question - find the target index in a rotated sorted array
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> arr={4,5,6,7,0,1,2};
    int target = 7;
    int st=0;
    int end = arr.size();
    int mid = end + (st-end)/2;
    
    while(st <= end){
        if(target=arr[mid]){
        return mid;
        }
        if(arr[st]<arr[mid] ){
           if(arr[st]<target && arr[mid]>target){
            end = mid-1;
           }
           else{
            st = mid+1;
           }
        }
        if(arr[st]>arr[mid]){
           if(arr[st]<target && arr[mid]>target){
            st=mid+1;
           }  
           else{
            end=mid-1;
           }
        }
        
    }
    return 0;
}