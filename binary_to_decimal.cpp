#include<iostream>
using namespace std;
int main(){
	int N,n,no,p;
	cin>>N;
	
	while(N>0){
		cin>>n;
		no=0;
	    p=1;
	    while(n>0){
			int r=n%10;
			no=no+p*r;
			p=p*2;
			n=n/10;
		}
	cout<<no<<endl;
	N=N-1;
    }
	
	return 0;
}
