#include <iostream>
using namespace std;
int main(){
	int a=7, b=8, c=0;
	
	while(a<3*b){
		c=2*(a+b);
		//c=30
		while(b<=c){
			c=c-3;//30,27,24,21,18,15,12,9
		//c=6
		}
	
	a=a+c+3;//a=7, a=16, a=25=(16+6+3)
	}
	
	cout<<a+b+c;//25+8+6=39
}
