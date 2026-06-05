#include <iostream>
using namespace std;
int dectobin(int decnum){
    int ans=0;
    while(decnum>0){
        int rem = decnum/2;
        int pow=1;
        ans += (rem*power);
        decnum /= 2;
        pow = pow*10;
    }
    return ans;

}
int main (){
    int decnum;
    cout<<"inter decimal number :";
    cin>>decnum;
    cout << dectobin(decnum);
}