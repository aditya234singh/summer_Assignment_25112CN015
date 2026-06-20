// question - print the fibonacci number up to a given number n
#include <iostream>
using namespace std;
int fibonacciint n){
    if(n==0 || n==1){
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
     int n;
     cin>>n;
     fibonacci(n);
    return 0;
}