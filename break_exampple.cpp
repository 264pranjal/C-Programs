#include<iostream>
using namespace std;
int main(){
	//problem-statement= read a stream of numbers until you get a multiple of 7
	int n;
	cin>>n;
	while(true){
		cout<<n<<endl;
		n=n+1;
		if(n%7==0){
	       break;
		}
	}
	return 0;
}
