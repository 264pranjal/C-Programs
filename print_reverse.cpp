//Take N as input, Calculate it's reverse also Print the reverse.
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=0;n!=0;i++){
		int a=n%10;
		cout<<a;
		n=n/10;
	}
	return 0;
}
