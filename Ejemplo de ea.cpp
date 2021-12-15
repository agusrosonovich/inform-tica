#include <iostream>
#include <iomanip>
using namespace std;
const int N = 3;
void cargar_datos(int [N][N]);
void mostrar(int [N][N],char car);
int cant_filas(int [N][N]);
void nuevo_arreglo(int [N][N],int [N]);
int main()
{
    
   
    
    int A[N][N];
	int arreglo[N]={0,0,0};
    cargar_datos(A);
    char car;
    mostrar(A,car);
    int filas=cant_filas(A);
    cout<<endl<<"La cantidad de filas: "<<endl;
	cout<<filas<<endl;
    nuevo_arreglo(A,arreglo);
    
}
void cargar_datos(int A[N][N]){
	for(int i=0 ;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<"Ingrese el elemento ("<<i<<","<<j<<"): "<<endl;
            do{
            cin>>A[i][j];
        }
            while(A[i][j]<0);
        }
    }    
    
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            A[i][j]=(A[i][j])%10;
        }
    }
                   
  
	
}
void mostrar(int A[N][N], char car){
		
	cout<<"Ingrese un caracter"<<endl;
	 cin>>car;
	 for(int i=0;i<N;i++){
        
		if(i>0){
            cout<<endl;
        }
        
        for(int j=0;j<N;j++){
        	if(j==0){
        		cout<<setw(3)<<car;
			}
            cout<<setw(3)<<A[i][j];
            if(j==N-1){
            	cout<<car;
			}
        }
        
    }
    
    
}
int cant_filas(int A[N][N]){

	int filas_impares=0;
	for (int i=0;i<N;i++){
		int impares=0;
	
			for(int j=0;j<N;j++){
				if(A[i][j]%2!=0){
					impares++;
			}
			if(impares==N){
			filas_impares++;
		}
		}
	}

	
	return filas_impares;
}
void nuevo_arreglo(int A[N][N],int arreglo[N]){
	int fila_primos=0;
	for(int i=0;i<N;i++){
		int primos=0;
		for(int j=0;j<N;j++){
			switch(A[i][j]){
				case 3:
					primos++;
					break;
				case 5:
					primos++;
					break;
				case 7:
					primos++;
					break;
		
			}
			arreglo[i]=primos;
		}
	}
for(int i=0;i<N;i++){
	cout<<arreglo[i]<<endl;
}
}
    
