#include<iostream>
using namespace std;
string compareIfElse(int a, int b) {
	// Write your code here
	if(a>b) return "greater";
	else if(a<b) return "smaller";
	else return "equal";

}
int main(){
    cout<<"Enter two numbers:";
    int a,b;
    cin>>a;
    cin>>b;
    cout<<compareIfElse(a,b)<<endl;
    return 0;
}
