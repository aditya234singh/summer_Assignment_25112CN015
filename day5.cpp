// question - find smallest number in an array
#include <iostream>
using namespace std;
int main(){
 int nums[] = {9,11,13,2,7,18};
 int smallest = 20 ;
 int n = 6;
 for(int i=0; i<n ; i++){
 if(smallest> nums[i]){
    smallest = nums[i];
 }
}
cout<<"smallest number is"<<smallest;
return 0;
}
