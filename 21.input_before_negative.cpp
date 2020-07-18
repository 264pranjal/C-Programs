//Given a list of numbers, stop processing input after the cumulative sum of all the input becomes negative.
#include<iostream>
using namespace std;
int main() {
	int no;
	int sum=0;
	for(int i=0;;i++){
		cin>>no;
        sum +=no;
		if(sum<0){
			break;
		}
		cout<<no<<endl;
	}
	return 0;
}
