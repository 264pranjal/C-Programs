/*
Pattern
0
10
010
1010
01010
101010
*/
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int val = i%2==0?1:0;
		for(int cnt=1;cnt<=i;cnt++){
			cout<<val;
			val=1-val;
		}
		cout<<endl;
	}
	
	return 0;
}