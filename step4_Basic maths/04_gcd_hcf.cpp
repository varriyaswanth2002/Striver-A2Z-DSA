#include<iostream>
using namespace std;
int calcGCD(int n, int m){
    // Write your code here.
    while(m>0 && n>0){
        if(m>n){
            m = m%n;
        }
        else{
            n=n%m;
        }
    }
    if(m==0) return n;
    else return m;
    
}
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    cout<<calcGCD(n,m)<<endl;
}