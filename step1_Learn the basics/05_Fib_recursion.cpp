#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int recurr(int);
int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
        int n;
        cin>>n;
        cout<<recurr(n)<<endl;
}
int recurr(int n){
        if(n==1 || n==2) return 1;
        else{
                return recurr(n-1) + recurr(n-2);
        }
}