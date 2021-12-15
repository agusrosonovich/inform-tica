/***************************************************************
TABLA DE CALIFICACION:
--------------------------------------------------------------
/10 cargar_vector
/10 imprimir_vector
/10 numeros_impares
/10 cantidad_de_numeros_menores_que_x
/20 calcular_matriz
/10 imprimir_matriz
/20 programa principal
/10 Comentarios, sem�ntica y presentaci�n
--------------------------------------------------------------
/100 Total
**************************************************************

Realice un programa con las siguientes caracter�sticas:

El programa principal debe pedirle al usuario que ingrese la longitud de un
vector que va a cargar a continuaci�n. Luego el programa debe pedirle al
usuario que ingrese dichos n�meros y cargarlos en un vector. Los n�meros del
vector se deben ingresar separados por uno o mas espacios. El tama�o m�ximo del
vector es 10. Todo lo mencionado se debe realizar dentro de la funci�n
"cargar_vector"

Posteriormente, el programa debe imprimir por pantalla los elementos del vector
mediante la funci�n "imprimir_vector".

A continuaci�n el programa debe encontrar la cantidad de n�meros impares que
contenga el vector mediante la funci�n "numeros_impares". La impresi�n del
resultado se debe realizar en el programa principal, no dentro de la funci�n.

Posteriormente, dentro del programa principal, el programa le pide al usuario
que ingrese un n�mero real X. Una vez ingresado el valor de X el programa debe
llamar a la funci�n "cantidad_de_numeros_menores_que_x" la cual calcula y
retorna la cantidad de n�meros del vector que son menores que X. El resultado
se imprime en el programa principal.

Posteriormente, el programa llama a la funci�n "calcular_matriz" la cual debe
calcular una matriz cuadrada cuyo numero de filas y de columnas es igual a la
longitud del vector. En la fila 'k' y columna 'n' de debe almacenar el producto
de los elementos del vector ubicados en las posiciones 'k' y 'n'. Por ejemplo,
si el vector es [1 2 3 4 5] con k=1 y n=3, entonces en la fila 1 y columna 3 de
la matriz se debe poner el numero vector[1]+vector[3] = 2*4 = 6.

Dicha matriz es posteriormente impresa en pantalla mediante la funci�n
"imprimir_matriz".

Todo lo que no est� realizado dentro de las funciones se debe realizar en el
programa principal.

-------------------------------------------------------------------
Ejemplo de la ejecuci�n del programa:

Ingrese la longitud del vector: -1
ERROR: Ingrese nuevamente la longitud del vector: 23
ERROR: Ingrese nuevamente la longitud del vector: 5

Ingrese los numeros del vector: 5 4 3 2 1

El vector es: 5 4 3 2 1

La cantidad de numeros impares es: 3

Ingrese X: 2.3

La cantidad de numeros menores a x es: 2

La matriz es:
25 20 15 10 5
20 16 12 8 4
15 12 9 6 3
10 8 6 4 2
5 4 3 2 1

*/
#include <iostream>
#include <cmath>
#include <iomanip>
#include <fstream>
using namespace std;
const int MAX=10;
void cargar_vector (int vector[MAX], int &longitud);
void imprimir_vector(int vector[MAX], int longitud);
int numeros_impares(int vector[MAX], int longitud);
int cantidad_de_numeros_menores_que_x(int vector[MAX], int longitud, int x);
int main(){
	int longitud,vector[MAX];
	cout<<"ingrese la longitud del vector";
	cin>>longitud;
	while(longitud<0 || longitud>10){
	
		if(longitud<0){
			cout<<"error la longitud tiene que ser >0)";
		cin>>longitud;
		}
		if(longitud>10){
			cout<<"error la longitud tiene que ser <10";
			cin>>longitud;
		}
	}
	cargar_vector(vector,longitud);
	imprimir_vector(vector,longitud);
	int aux=numeros_impares (vector, longitud);
	cout<<"la cantidad de numeros es: "<<aux<<endl;
	cout<<"Ingrese X";
	int x;
	cin>>x;
	cantidad_de_numeros_menores_que_x(vector, longitud,x);	
	
	
	
	
	
	
	
	
	
	}
	
	
	
	
	
	
	
	
void cargar_vector(int vector[MAX], int &longitud){

	for(int k=0; k<longitud;k++){
		cin>>vector[k];
	}
}
void imprimir_vector(int vector[MAX], int longitud){
	for(int k1=0;k1<longitud;k1++){
		cout<<vector[k1];
	}
}
int numeros_impares(int vector[MAX], int longitud){
	int aux=0;
	for(int k2=0;k2<longitud;k2++){
		if((vector[k2]%2)!=0){
			aux++;
		}
	return aux;
	}
}
int cantidad_de_numeros_menores_que_x( int vector[MAX], int longitud,int x){
	int aux1=0;
	for(int k3=0;k3<longitud;k3++){
		if(vector[k3]<=x){
			aux1++;
		}
	}

}

