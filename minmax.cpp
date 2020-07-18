#include<iostream>
#include<climits>
using namespace std;
int main(){
	int n;
	cin>>n;
	int min=INT_MAX;
	int max=INT_MIN;
	int no,i;
	for(i=0;i<n;i++){
		cin>>no;
		if(no<min){
			min=no;
		}
		if(no>max){
			max=no;
		}
	}
	cout<<min<<"-This is minimum"<<endl;
	cout<<max<<"-This is maximum"<<endl;
	return 0;
}
