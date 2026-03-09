#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int reverseNumber=0;
    while(n!=0){
        int digit = n%10;
        reverseNumber = reverseNumber * 10 + digit;
        n=n/10;
    }
    cout<<reverseNumber;
    return 1;
}