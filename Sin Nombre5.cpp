#include <iostream>
using namespace std;
int main(){
	int a=7, b=6;
	
	while(a<=4*b){
		if((a+b)%2==1)
			for(int d=a; d<3*b; d+=a+3)
				a=a+d;
				cout<<"a: "<<a<<endl;
			a=a+1;
			cout<<"a: "<<a<<endl;	
	}
cout<<a+b;
}
