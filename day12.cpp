// question - find maximum area 
#include <iostream>
using namespace std;
int main(){
    int height[] = {1,8,6,2,5,4,8,3,7};
    int left , right ;
    int area,ans;
    while(left<right){
    area = (right-left)*min(height[left],height[right]);
    height[left]<height[right]? left++ : right-- ;
    ans = max(ans,area);
    }
    return ans;
}