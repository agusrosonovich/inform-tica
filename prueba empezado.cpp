#include <fstream>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void leer_datos(double coordenadas[100][2], int& n_ciudades);
int main(){
double coordenadas[100][2], ciudades_perifericas[2][2], distancia, coordenada_y;
double x_centro, y_centro;
int    n_ciudades;
leer_datos(coordenadas, n_ciudades);
}
void leer_datos(double coordenadas[100][2], int& n_ciudades){
	ifstream arch;
	arch.open("ciudades.txt");
	arch>>n_ciudades;
	for(int k=0;k<n_ciudades;k++){
		for(int n=0;n<2;n++){
			arch>>coordenadas[k][n];
			cout<<coordenadas[k][n];
		}
	cout<<endl;
	}
	
	
}

