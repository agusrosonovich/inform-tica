#include<iostream>
using namespace std;
int main(){
	int a=7;
	int b=8;
	int c=0;
	while(a<3*b){
		c=2*(a+b);
		while(b<=c){
			c=c-3;
		}
	}
cout<<a+b+c;
return 0;
}


