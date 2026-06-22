// question - create binary search code using recursion
#include <iostream>
#include <vector>
using namespace std;
int binsearch(int arr[],int target,int st , int end){
    int mid=end+(st-end)/2;
    if(target == arr[mid])  return mid;
    else if(arr[mid]>target)  {
        return binsearch(arr,target,st,mid-1);
    }
    else return binsearch(arr,target,mid+1,end);
}
int main(){
    int arr[]={1,3,5,7,9};
    int n=sizeof(arr);
    int st=0,end=n-1;

    int target=5;
    binsearch(arr,target,st,end);
    return 0;
}