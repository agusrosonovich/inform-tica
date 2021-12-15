#include <iostream>
using namespace std;

int main(){
	void Mostrar(char, int);
	char Caracter(int);
	int cantidad=2;
	char caracter='@';
	int valor= 3;
	
	Mostrar(caracter, cantidad);
	for(int i=0; i<valor;i++)
		cout<<Caracter(0);//se ejecuta 3 veces por ende tipo=0 por lo que aparecen "aaa"
	return 0;	
}
void Mostrar(char car, int cant){
	for(int i=0; i<cant; i++)
		cout<<car;//Se ejecuta 2 veces, por ende "@@"
}

char Caracter(int tipo){
	char caracter;
	if(tipo==0)
		caracter='a';
	else if(tipo==1)
		caracter='b';
	else
		caracter='c';
		
	return caracter;	
}
