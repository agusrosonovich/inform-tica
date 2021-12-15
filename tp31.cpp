#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int masRepetido(int arreglo[], int N);
int N;
int main(){

int masRepetido(int arreglo[], int N);
}
int masRepetido(int arreglo[], int N)
{
    int repe[N], max, c=0;
    for( int i=0; i<N; i++ ){
        repe[i]=0;
        for( int j=0;j<N;j++){
            if(arreglo[i]==arreglo[j] ){
                repe[i]++;
            }
        }
    }
    max=repe[0];
    for( int=0; i<N ; i++){
        if( max<repe[i]){
            max=repe[i];
            c=i;
        }
    return arreglo[c];
        
    }
    
}
}
