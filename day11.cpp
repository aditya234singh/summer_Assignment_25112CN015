#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> nums = {1,1,2,2,1};
    int n=5;
    sort(nums.begin(),nums.end());
    int freq = 1 , ans= nums[0];
    for(int i=1;i<n;i++){
        if(nums[i]==nums[i-1]){
            freq++;
        }
        else{
            ans=nums[i] , freq=1;
        }
        if(freq>n/2){
            return ans;
        }
    }
    return 0;

}