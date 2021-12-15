#include <iostream>
using namespace std;
int main(){
	int contador;
	float distancia;
	
	contador=7;
	distancia=0;
	while((distancia>0)&&(distancia<12)){
		cout<<"ingrese la distancia al objeto";
		cin>>distancia;
		contador+=1;
	}

cout<<contador-1;
}
