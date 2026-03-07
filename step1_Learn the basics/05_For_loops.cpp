#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
       //Doing without vector.
        int n,a,b,temp;
        cin>>n;
        
        if(n==1 || n==2){
                cout<<1;
                return 0;
        }
        a=1,b=1;
        for(int i=3;i<=n;i++){
                temp = b;
                b=b+a;
                a=temp;
                
        }
        cout<<b;
}