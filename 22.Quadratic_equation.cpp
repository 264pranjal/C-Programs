/*Given coefficients of a quadratic equation , you need to print the nature of the roots (Real and Distinct , Real and Equal or Imaginary) and the roots.
If Real and Distinct , print the roots in increasing order.
If Real and Equal , print the same repeating root twice
If Imaginary , no need to print the roots.*/
#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int a,b,c;
	cin>>a;
	cin>>b;
	cin>>c;
	float disc=b*b-4*a*c;
	if(disc>0){
    	int root1 = (-b+(sqrt(disc)))/(2*a);
		int root2 = (-b-(sqrt(disc)))/(2*a);
		cout<<"Real and Distinct"<<endl;
		cout<<root2<<" "<<root1;
	}
	else if(disc==0){
		int root3,root4;
		root3= root4 = -b/(2*a);
		cout<<"Real and Equal"<<endl;
		cout<<root3<<" "<<root4;
	}
	else{
		cout<<"Imaginary"<<endl;
	}
	
	return 0;
}
