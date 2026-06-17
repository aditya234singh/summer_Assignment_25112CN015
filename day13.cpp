// question - find product array of given array
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> nums = {1,2,3,4};
    vector<int> prefix;
    vector<int> suffix;
    vector<int> ans;
    int n=nums.size();
    for(int i=0;i<n;i++){
    prefix[i] = prefix[i-1] * nums[i-1];
    }
    for(int i=0;i<n;i++){
    suffix[i] = suffix[i-1] * nums[i-1];
    }
    for(int i=0;i<n;i++){
    return       ans[i] = prefix[i-1] * suffix[i-1];
    }
   

     
    return 0;
}