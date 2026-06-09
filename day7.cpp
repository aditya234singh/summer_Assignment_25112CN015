// question-find maximum subarray sum using kadane's algorithm
#include <iostream>
using namespace std;
int main(){
    int n = 6;
    int arr[]= {2,-8,5,3,-2,1};
    int maxsum=INT16_MIN;
    int cs = 0;
    for(int i=0;i<n;i++){
     cs += arr[i] ;
     maxsum = max(cs,maxsum);
     if(cs<0){
        cs=0;
     }

    }
    cout<<"maximum subarray sum :"<<maxsum;
    return 0;
}