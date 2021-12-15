#include <iostream>
using namespace std;

int sumar(int n=1);
int sumar(double c);
int sumar(int n, int&sumar);
int suma=0;

int main(){
	int suma=3;
	cout<<sumar(0.5+sumar(2));//0.5+2, 2.5, 2
	cout<<sumar(0.0+sumar(2,suma));//5, 7
	
	cout<<sumar(0.5+sumar(2.5));//sumar(0.5 ,9), sumar(9.5), 18 
	
	return 0;
}
int sumar(int n){
	suma+=n;//
	return suma;//2
}
int sumar(int n, int &suma)//(2,3)
{
	suma+=n;
	return suma;//5
}
int sumar(double c)//2.5
{
	static int suma=0;//2,7,9
	suma+=int(c);//int 2.5=2
	return suma;
}

