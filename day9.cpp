// question - find the indices of the pair of the vector
//ose sum is equal to the target
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> nums = {2,7,11,15};
    int n = nums.size();
    int target = 9;
    int i=0,j=n-1;
    while(i<j){
     int pairsum = nums[i]=nums[j];
    
        if(pairsum>target){
         j--;
        }
        if(pairsum<target){
        i++;
        }
            
        
        else{
         return i,j;
        }
    }
    return 0;
}