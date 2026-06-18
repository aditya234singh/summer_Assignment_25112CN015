// question - find the index of a given value in a vector
#include <iostream>
#include <vector>
using namespace std;
int binarysearch(vector<int> arr, int target){
    int st=0;
    int end=arr.size();
   int mid=(st+end)/2;
    if(target>arr[mid]){
    st = mid+1;
    }
    else if(target<arr[mid]){
        end=mid-1;
    }
    else(target=arr[mid]){
        return mid;
    }
}
int main(){
vector<int> arr1 = {-1,0,3,4,5,9,12}  ;
int target1 = 12;
return binarysearch(arr1,target1);
vector<int> arr2 = {-1,0,3,5,9,12} ;
int target2 = 0;
return 0;
}