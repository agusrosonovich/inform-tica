#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int N=5;
	double v1[N], v2[N];
    double dist = 0;
    
    //ingreso v1
    for(int i=0; i<N; i++)
        cin>>v1[i];    
    
    //ingreso v2
    for(int i=0; i<N; i++)
        cin>>v2[i];    
    
    //calculo distancia
    for(int i=0; i<5; i++)
        dist += pow(v1[i]-v2[i],2.0);
    
    //Imprimo mensaje de resultado
    cout<<"La distancia entre (";
    
    for(int i=0; i<N; i++){
        cout<<v1[i]<<","; 
    }
    cout<<") y (" ;
    
    for(int i=0; i<N; i++){
        cout<<v2[i]<<","; 
    }
    cout<< ") es " << fixed << setprecision(2) << sqrt(dist)<<endl; 
	
	

}

