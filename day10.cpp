#include <iostream>
#include <vector>
using namespace std;
int majorityelement(vector<int> &nums){
    int n = nums.size();
    for(int val : nums){
int       freq = 0;
        for(int el : nums){
       if(el == val){
        freq ++ ;
       }
        }
        if(freq > n/2){
            return val;
        }
    }
    
}
int main(){
    vector<int> nums = {1,2,2,1,1};
    int element = majorityelement(nums);
    cout<<"majority element is :"<<element;
    return 0;
}

