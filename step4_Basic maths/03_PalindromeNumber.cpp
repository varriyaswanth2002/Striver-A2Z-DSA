#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool palindrome(int n)
{
    // Write your code here
    int reverse=0,n1=n;
    while(n!=0){
        int digit = n%10;
        reverse = reverse * 10 + digit;
        n = n/10;
    }
    if(reverse == n1) return true;
    else return false;

}
int main(){
    int n;
    cin>>n;
    cout<<palindrome(n)<<endl;
}
