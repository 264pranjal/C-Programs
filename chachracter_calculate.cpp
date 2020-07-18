//program to calculatedigita,whitespaces,alphabets and other charactersterminated by $
#include<iostream>
using namespace std;
int main(){
	int digit=0;
	int spaces=0;
	int alphabet=0;
	int others=0;
	int ch;
	ch=cin.get();
	while(ch!='$'){
		if(ch>='0' and ch<='9'){
			digit++;
		}
		else if((ch>='a' and ch<='z') or (ch>='A' and ch<='Z')){
			alphabet++;
		}
		else if(ch==' ' or ch=='\n' or ch=='\t'){
			spaces++;
		}
		else{
			others++;
		}
		ch=cin.get();
	}
	cout<<"digits "<<digit<<endl;
	cout<<"spaces "<<spaces<<endl;
	cout<<"alphabet "<<alphabet<<endl;
	cout<<"others "<<others<<endl;
	return 0;
}
