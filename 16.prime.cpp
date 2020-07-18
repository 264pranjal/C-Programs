#include<iostream>
using namespace std;
int main(){
	//problem-statement= prime no.check
	int n;
	cin>>n;
	for(int i=2;i<n;i++){
		
		if(n%i==0){
		    cout<<"It is not prime "<<n;
			break;
		}
		else{
		cout<<"Prime no. "<<n;
		break;
	    }
	}
	
	return 0;
}
