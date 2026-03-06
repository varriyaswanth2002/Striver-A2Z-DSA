#include<iostream>
using namespace std;

int main() {
	// Write your code here
	//A = 64+1 = 65; a = 64+32+1 = 97
	char ch;
	cin>>ch;
	if(ch>='A' && ch<='Z'){
		cout<<1;
	}
	else if(ch>='a' && ch<='z'){
		cout<<0;
	}
	else { 
		cout<<-1;
	}
	
}
