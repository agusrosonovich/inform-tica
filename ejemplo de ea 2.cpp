#include <iomanip>
#include <iostream>
using namespace std;
int const N=2;
void agregarBarcos(int tablero[N][N], int nuevos){
	int x,y;
	for(int i=0;i<nuevos;i++){
		cout<<"Ingresar coordenada X: ";
		cin>>x;
		cout<<"Ingresar coordenada Y: ";
		cin>>y;
			if(x>=0 && x<N && y>=0 && y<N){
				tablero[x][y]++;
			}
		
	}
	
}
void mostrarTablero(int tablero[N][N]){
	for (int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if(tablero[i][j]>0){
				cout<<"x";
			}
			else{
				cout<<"-";
			}
		}
		cout<<endl;
	}
}
int main(){
	int tablero[N][N],nuevos;
	cin>>nuevos;
	agregarBarcos(tablero,nuevos);
	mostrarTablero(tablero);
}
