#include<iostream>
using namespace std;
int countDigits(int n){
	// Write your code here.
	int m = n, digit,count = 0;
	while(n!=0){
		digit = n%10;
		n=n/10;
		if(digit==0) continue;
		if(m%digit == 0) count++;
		
	}	
	return count;
}
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<countDigits(n)<<endl;
}