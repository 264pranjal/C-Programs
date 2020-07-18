#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	//program for idvisbel by2,by3 and both.
	if (n%2==0){
	if (n%3==0){
		cout<<n<<"is divisible by both 2 and 3";}
	else{
		cout<<n<<"is divisible by 2";
	}}
	else if (n%3==0){
	    cout<<n<<"is divisible by 3";
	}
	else{
		cout<<n<<"is not divisible by either2 or 3";
	}
	return 0;
}
