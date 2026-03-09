#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool checkArmstrong(int n){
	//Write your code here
	vector<int>digits;
	int digit,copy = n;
	while(n!=0){
		digit = n%10;
		digits.push_back(digit);
		n=n/10;
	}
	int size = digits.size();
	int result=0;
	for(int i=0;i<digits.size();i++){
		result = result + pow(digits[i],size);
	}
	if(result == copy) return 1;
	return 0;
}
int main(){
    int n;
    cin>>n;
    cout<<checkArmstrong(n)<<endl;
}