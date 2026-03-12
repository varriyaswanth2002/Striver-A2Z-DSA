#include<iostream>
using namespace std;
int sumOfAllDivisors(int n){
    int sum =0;
    for(int i=1;i<=n;i++){
        //check how many times each number exist as a divisor
        sum += i * (n/i);
    }//means 1 is divisor of all n numbers, so add it n/1 = n times. 
return sum;
}
int main(){
    int n;
    cin>>n;
    cout<<sumOfAllDivisors(n)<<endl;
}