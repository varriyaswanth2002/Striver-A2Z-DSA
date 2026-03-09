#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long reverseBits(long n) {
    // Write your code here.
    long q = n;
    int r;
    deque<int>binary_list;
    while(q>0){
        r=q%2;
        binary_list.push_back(r);
        q = q/2;
    }
    //we get the binary of the number till now,In reverse order only but not 32 bits always
    int size = binary_list.size();
    int remaining_size = 32 - size;
    for(int i=1;i<=remaining_size;i++){
        binary_list.push_back(0);
    }
    long answer=0;
    for(int i=0;i<binary_list.size();i++){
        answer = answer + binary_list[i]*pow(2,binary_list.size()-i-1);
    }
    return answer;
}
int main(){
    int n;
    cin>>n;
    cout<<reverseBits(n)<<endl;
}
