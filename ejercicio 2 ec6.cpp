#include <iostream>
using namespace std;

double pol(double x);

int main(){
	double y=0, x=1;
	x=pol(y);//pol(0)= retorna el numero 1
	cout<<x;
	y=pol(pol(y));//pol(1)= retorna el numero 2
	cout<<y;
	x=pol(x);
	cout<<x;//pol (1)= 2
	
	return 0;
}
double pol(double x){
	double y=1+x;
	return y;
}
