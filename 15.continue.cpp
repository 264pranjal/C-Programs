#include<iostream>
using namespace std;
int main(){
	//problem-statement= read a stream of numbers until you get a multiple of 7
	int n;
	
	while(true){
		cin>>n;
		if(n%7==0){
	       continue;
		}
		cout<<n<<endl;
	}
	return 0;
}
