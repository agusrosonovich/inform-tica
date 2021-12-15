/*
  **************************************************************
  MATERIA   : INFORMATICA
  EXAMEN    : Especificación de Algoritmos - 9 de Noviembre 2016
  NOMBRES   : 
  MATRICULA : 
  CARRERA   : 
  COMISION  : 
  **************************************************************
  TABLA DE CALIFICACION:
  --------------------------------------------------------------
    /15  leer_datos
    /10  coordenada_y_de_la_ciudad_mas_al_norte
    /20  distancia_de_ciudades_mas_lejanas
    /10  calcular_el_centro_de_la_ciudad
    /20  buscar_ciudades_perifericas
    /15  guardar_resultados
    /10  Comentarios, semántica y presentación
  --------------------------------------------------------------
    /100 Total 
  **************************************************************

  Enunciado:

  Escribir un programa que lea y procese información contenida en un archivo de
  texto llamado "ciudades.txt". Dicho archivo posee información sobre las
  coordenadas geográficas de las ciudades de un determinado país. La ubicación
  de cada ciudad está determinada por las coordenadas X en Y sobre un plano en
  unidades de "metros". El primer número que contiene el archivo es un número
  entero que indica la cantidad de ciudades almacenadas en el archivo. Los
  números sucesivos (números reales) son las coordenadas X e Y (en este orden)
  de cada una de las ciudades. Los números están separados por espacios o nueva
  linea. A continuación se muestra un ejemplo del contenido del archivo.
 
  Ejemplo del contenido del archivo "ciudades.txt"

   6
   1.25   3.3
  -4      6.7
  23.8   10.123
   5.5   -3.0
   8.7    0.23
   4.23   7.65

  El número máximo de ciudades que puede contener el archivo es 100. La
  coordenada X positiva hace referencia al punto cardinal "este" y la coordenada
  Y positiva hace referencia al punto cardinal "norte".

  Realizar cada una de las funciones que se describen a continuación. No se debe
  modificar ni eliminar el código que ya esta escrito. Solo se debe completar
  con el código faltante. No se deben usar variable globales.

  ------------------------------------------------------------------------------
  Ejemplo de ejecución:

  La coordenada Y de la ciudad mas al norte es: 10.123
  Las ciudades mas lejanas se encuentran a una distancia de: 28.0099

  El centro de la ciudad es: 6.58   4.16717

*/



// --- Inicio del programa -----------------------------------------------------

/*

  Incluir bibliotecas y prototipos de funciones aquí

*/

#include <fstream>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void leer_datos(double coordenadas[100][2], int& n_ciudades);
double coordenada_y_de_la_ciudad_mas_al_norte(double coordenadas[100][2], int n_ciudades);
double distancia_de_ciudades_mas_lejanas(double coordenadas[100][2], int n_ciudades);
void calcular_el_centro_de_la_ciudad(double coordenadas[100][2], int n_ciudades, double &x_centro, double &y_centro);
void buscar_ciudades_perifericas(double coordenadas[100][2], int n_ciudades, double x_centro, double y_centro, double ciudades_perifericas[2][2]);
void guardar_resultados(double ciudades_perifericas[2][2]);


int main() // Este main no debe ser modificado
{
  double coordenadas[100][2], ciudades_perifericas[2][2], distancia, coordenada_y;
  double x_centro, y_centro;
  int    n_ciudades;

  leer_datos(coordenadas, n_ciudades);

  coordenada_y = coordenada_y_de_la_ciudad_mas_al_norte(coordenadas, n_ciudades);

  distancia = distancia_de_ciudades_mas_lejanas(coordenadas, n_ciudades);

  cout << "\n\n";
  cout << "La coordenada Y de la ciudad mas al norte es: " << coordenada_y;
  cout << "\n";
  cout << "Las ciudades mas lejanas se encuentran a una distancia de: " << distancia;
  cout << "\n\n";

  calcular_el_centro_de_la_ciudad(coordenadas, n_ciudades, x_centro, y_centro);

  cout << "El centro de la ciudad es: " << x_centro << "   " << y_centro << "\n\n";

  buscar_ciudades_perifericas(coordenadas, n_ciudades, x_centro, y_centro, ciudades_perifericas);

  guardar_resultados(ciudades_perifericas);

  return 0;
}

/*Tipo de datos que retorna*/ void leer_datos(double coordenadas[100][2], int& n_ciudades)
{
	ifstream arch;
	arch.open("ciudades.txt");
	arch>>n_ciudades;
	for(int k=0;k<n_ciudades;k++){
		for(int n=0;n<2;n++){
			arch>>coordenadas[k][n];
		}
}
	arch.close();
   /*
   Esta función debe leer el archivo "ciudades.txt" y cargar la información en
   la matriz "coordenadas" que recibe como parámetro. La cantidad de ciudades se
   carga por referencia en el parámetro "n_ciudades".
   */

}

/*Tipo de datos que retorna*/ double coordenada_y_de_la_ciudad_mas_al_norte(double coordenadas[100][2], int n_ciudades)
{
   double y= coordenadas[0][1];
   for(int k=0; k<n_ciudades;k++){
      if(y<coordenadas[k][1])
   		y=coordenadas[k][1];
	}
   return y;		
   }
   /*
   Esta función debe buscar la ciudad que se encuentra mas al norte y retornar
   la coordenada Y de dicha ciudad.
   */


/*Tipo de datos que retorna*/ double distancia_de_ciudades_mas_lejanas(double coordenadas[100][2], int n_ciudades)
{
   double max_dist=0;
   for(int k=0;k<n_ciudades;k++){
   
   	for(int n=0; n<n_ciudades; n++){
	   	double dx=coordenadas[k][0]-coordenadas[n][0]; //distancia x(PQ=Q-P)
		double dy=coordenadas[k][1]-coordenadas[n][1];//distancia y
		double dist=sqrt(dx*dx+dy*dy);   //DISTANCIA = (RAIZ CUADRADA DE X^2+Y*2)
   		if(dist>max_dist)//BUSCA MAXIMO
   		max_dist=dist;
   		}
   }
   	return max_dist;	
   /*
   Esta función debe buscar el par de ciudades que se encuentran a mayor
   distancia y retornar dicha distancia.
   */
}

/*Tipo de datos que retorna*/ void calcular_el_centro_de_la_ciudad(double coordenadas[100][2], int n_ciudades, double& x_centro, double& y_centro)
{
  
  for(int k=0;k<n_ciudades;k++){
  	x_centro+=coordenadas[k][0]; // (SUMA DE COORDENADAS EN X)
  	y_centro+=coordenadas[k][1];// (SUMA DE COORDENADAS EN Y)
  }
  x_centro/=n_ciudades;//(SUMA DE COORDENADAS X/TOTAL)
  y_centro/=n_ciudades;//(SUMA DE COORDENADAS Y/TOTAL)
  /*
    Esta función debe calcular el centro de la ciudad y retornarlo como
    parametros por referencia. Las coordenadas X e Y del centro del país se
    calculan como el promedio de las coordenadas X e Y de todas las ciudades.
    Por ejemplo, la coordenada X del centro es el promedio de las coordenadas X
    de todas las ciudades.
  */
}


/*Tipo de datos que retorna*/ void buscar_ciudades_perifericas(double coordenadas[100][2], int n_ciudades, double x_centro, double y_centro, double ciudades_perifericas[2][2])
{
   
   int kmax=-1;//lugar de la ciudad mas lejana, cuando busco pasa a ser la segunda
   for(int n=0;n<2;n++){
   	double dmax=0;
      
   	for(int k=0;k<n_ciudades;k++){
   		if(k!=kmax){
   			double dist=sqrt((coordenadas[k][0])-x_centro)*((coordenadas[k][0]))-(x_centro)+((coordenadas[k][1])-y_centro)*((coordenadas[k][1])-y_centro);
   			if(dmax<dist){
   				dmax=dist;
   				ciudades_perifericas[n][0]=coordenadas[k][0];
   				ciudades_perifericas[n][1]=coordenadas[k][1];
   				kmax=k;
			   }
   			
		   }
   	
   }
}
}

/*Tipo de datos que retorna*/  void guardar_resultados(double ciudades_perifericas[2][2])
{
   ofstream arch;
   arch.open("ciudades_perifericas.txt");
   arch<<"Ciudad 1:  "<<"X = "<<ciudades_perifericas[0][0]<<"Y = "<<ciudades_perifericas[0][1]<<endl;
   arch<<"Ciudad 2:  "<<"X = "<<ciudades_perifericas[1][0]<<"Y = "<<ciudades_perifericas[1][1]<<endl;
   arch.close();
   
   
   /*
   Esta función debe guardar en un archivo llamado "ciudades_perifericas.txt" las
   coordenadas de las ciudades perifericas que recibe como parámetro en la matriz
   "ciudades_perifericas". El contenido del archivo debe seguir el siguiente
   formato:

   Ciudad 1:  X = 23.8	  Y = 10.1
   Ciudad 2:  X = -4.0	  Y = 6.7
   */
}

// --- Fin del programa --------------------------------------------------------
