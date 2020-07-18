#include<iostream>
using namespace std;
int main(){
	char ch;
	ch = cin.get();
	int x=0;
	int y=0;
	while(ch!='\n'){
		if(ch=='N' or ch=='n'){
			y++;
		}
		else if(ch=='S' or ch=='s'){
			y--;
		}
		else if(ch=='E' or ch=='e'){
			x++;
		}
		else{
			x--;
		}
		ch=cin.get();
	}
	cout<<"Final Coordinates: "<<x<<"and "<<y<<endl;
	for(int i=1;i<=x;i++){
		cout<<"E";
	}	
	for(int j=1;j<=y;j++){
		cout<<"N";
	}
	return 0;
}
