#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	//loop for rows
	for(int i=1;i<=n;i++){
		//spaces
		for(int space=1;space<=(n-i);space++){
			cout<<" ";
		}
		//incresing no.
		int val=i;
		for(int inc=1;inc<=i;inc++){
			cout<<val;
			val=val+1;
		}
		//decreasing
		val=val-2;
		for(int incs=1;incs<=i-1;incs++){
			cout<<val;
			val=val-1;
		}
		cout<<endl;
	}
	return 0;
}
