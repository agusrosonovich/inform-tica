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
/10 Comentarios, semántica y presentación
--------------------------------------------------------------
/100 Total
**************************************************************

Realice un programa con las siguientes características:

El programa principal debe pedirle al usuario que ingrese la longitud de un
vector que va a cargar a continuación. Luego el programa debe pedirle al
usuario que ingrese dichos números y cargarlos en un vector. Los números del
vector se deben ingresar separados por uno o mas espacios. El tamaño máximo del
vector es 10. Todo lo mencionado se debe realizar dentro de la función
"cargar_vector"

Posteriormente, el programa debe imprimir por pantalla los elementos del vector
mediante la función "imprimir_vector".

A continuación el programa debe encontrar la cantidad de números impares que
contenga el vector mediante la función "numeros_impares". La impresión del
resultado se debe realizar en el programa principal, no dentro de la función.

Posteriormente, dentro del programa principal, el programa le pide al usuario
que ingrese un número real X. Una vez ingresado el valor de X el programa debe
llamar a la función "cantidad_de_numeros_menores_que_x" la cual calcula y
retorna la cantidad de números del vector que son menores que X. El resultado
se imprime en el programa principal.

Posteriormente, el programa llama a la función "calcular_matriz" la cual debe
calcular una matriz cuadrada cuyo numero de filas y de columnas es igual a la
longitud del vector. En la fila 'k' y columna 'n' de debe almacenar el producto
de los elementos del vector ubicados en las posiciones 'k' y 'n'. Por ejemplo,
si el vector es [1 2 3 4 5] con k=1 y n=3, entonces en la fila 1 y columna 3 de
la matriz se debe poner el numero vector[1]+vector[3] = 2*4 = 6.

Dicha matriz es posteriormente impresa en pantalla mediante la función
"imprimir_matriz".

Todo lo que no está realizado dentro de las funciones se debe realizar en el
programa principal.

-------------------------------------------------------------------
Ejemplo de la ejecución del programa:

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
#include<fstream>
using namespace std;

const int MAX=10;

void cargar_vector ( int vector[MAX] , int &long1);
void imprimir_vector (int vector[MAX] , int long1);
int numeros_impares (int vector[MAX] , int long1);
int cantidad_de_numeros_menores_que_x (int vector[MAX] , int long1, int nreal);
int calcular_matriz (int matriz[MAX][MAX] , int vector[MAX], int long1);
void imprimir_matriz (int matriz[MAX][MAX] , int long1);

int main ()
{
	
	int long1, vector [MAX] , aux , nreal, aux2 , matriz[MAX][MAX];
	cout<<"Ingrese la longitud del vector:";
	cin>>long1;
	while (long1<0 || long1>10){
		if (long1<0){
			cout<<"Error, la longitud debe ser mayor que cero.";
		}
		if (long1>10){
			cout<<"Error, la longitud debe ser menor que diez.";
		}
	cin>>long1;
	}
	
	cout<<"Ingrese los valores del vector: ";
	cargar_vector (vector, long1);
	
	cout<<"El vector es: ";
	imprimir_vector (vector, long1);
	
	aux=numeros_impares (vector, long1);
	cout<<"La cantidad de numeros impares es: "<<aux<<endl;
	
	cout<<"Ingrese un numero real: ";
	cin>>nreal;
	aux2=cantidad_de_numeros_menores_que_x (vector, long1, nreal);
	cout<<"La cantidad de numeros menores que x es: "<<aux2<<endl;
	
	calcular_matriz (matriz, vector, long1);
	cout<<"La matriz es: "<<endl;
	imprimir_matriz (matriz , long1);
	cout<<endl;
	
	
}

void cargar_vector ( int vector[MAX], int &long1){
	for (int k=0 ; k<long1 ; k++){
		cin>>vector[k];
	}
}

void imprimir_vector (int vector[MAX] , int long1){
	for (int k=0 ; k<long1 ; k++){
		cout<<vector[k]<<" ";
	}
	cout<<endl;
}

int numeros_impares (int vector[MAX] , int long1){
	int aux=0;
	for (int k=0 ; k<long1 ; k++){
		if ((vector[k]%2)!=0){
			aux++;
		}
	}
return aux;	
}

int cantidad_de_numeros_menores_que_x (int vector[MAX] , int long1, int nreal){
	int aux;
	for (int k=0 ; k<long1 ; k++){
		if (vector[k]<nreal){
			aux++;
		}
	}
	return aux++;
}

int calcular_matriz (int matriz[MAX][MAX] , int vector[MAX], int long1){
	for(int k=0 ; k<long1 ; k++){
		for (int n=0 ; n<long1 ; n++){
			matriz[k][n]=vector[k]*vector[n];
		}
	}
	return matriz[MAX][MAX];
}

void imprimir_matriz (int matriz [MAX][MAX] , int long1){
	for (int k=0 ; k<long1 ; k++){
		for (int n=0 ; n<long1 ; n++){
			cout<<matriz[k][n];
		}
	cout<<endl;
	}
}

