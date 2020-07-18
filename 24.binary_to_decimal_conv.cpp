//Given a binary number ,help Von Neuman to find out its decimal representation. For eg 000111 in binary is 7 in decimal.
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int no;
	int b;
	
	for(int i=1;i<=n;i++){
		int sum=0;
		cin>>no;
		for(int j=0;no!=0;j++){
			int a=no%10;
			b=a<<j;
			sum=sum+b;
			no=no/10;
		}
		cout<<sum<<endl;
	}
	
	return 0;
}
