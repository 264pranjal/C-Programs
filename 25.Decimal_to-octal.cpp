//Take N (number in decimal format). Write a function that converts it to octal format. Print the value returned.
#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int no = 0;
	for(int i=0;n!=0;i++){
		int a = n%8;
		int b = a*pow(10,i);
		no = no + b;
		n = n/8;
	}
	cout<<no;
	return 0;
}
