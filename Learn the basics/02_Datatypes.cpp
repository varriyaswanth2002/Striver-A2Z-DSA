#include<iostream>
using namespace std;
int dataTypes(string type) {
	// Write your code here
	//using switch case;
	//we can use the first letter of the datatypes with a char
	//and do the switch OR take a int typecode and assign value
	char first_letter = type[0];
	switch(first_letter){
		case 'I': return 4;
		case 'L':return 8;
		case 'F': return 4;
		case 'D': return 8;
		case 'C': return 1;
	}
}
int main(){
    string s;
    cout<<"Enter a datatype:";
    cin>>s;
    cout<<dataTypes(s)<<endl;
    return 0;
}