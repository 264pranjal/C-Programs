#include<iostream>
using namespace std;
int main(){
	//simple interest by cpu
	int p,r,t,p1,r1,t1;
	float si,si1;
	p=10;
	r=25;
	t=1;
	si=p*r*t/100;
	cout<<si<<endl;
	//by user
	cin>>p1>>r1>>t1;
	si1=p1*r1*t1/100.0;
	cout<<si1<<endl;
	
	return 0;
}
