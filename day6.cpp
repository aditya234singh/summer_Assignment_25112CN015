// question - find maximum subarray sum by using brute force approach
#include <iostream>
using namespace std;
int main(){
int n = 6;
int arr[] = {3,-2,7,-4,8,-3};
int maxsum = INT16_MIN;
for(int st=0 ; st<n ; st++){
    int currsum = 0;
    for(int end = 0 ; end<n ; end++){
        currsum += arr[end];
        maxsum = max(maxsum,currsum);
        
    }
}
return maxsum;

}
