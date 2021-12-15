#include<iostream>
#include<cmath>
using namespace std;

void buscar(int[], int&, int&);
const int N=8;

int main(){
	int valores[N]={1,2,4,7,8,10,11,20};
	int num=6, dist=3;
	
	buscar(valores, num, dist);
	cout<<num<<"("<<dist<<")";
	
}
void buscar(int datos[], int& num, int& dist )
{
	int i;
	int refnum=num;//6
	int refdist=dist;//3
	
	num=datos[0];
	dist=abs(abs(num-refnum)-refdist);//3
	for(i=1;i<N;i++)
		if(dist>abs(abs(datos[i]-refnum)-refdist))//3>abs(-4)-refdis)>(4-3),3>1
		{
			dist=abs(abs(datos[i]-refnum)-refdist);//dist=1,
			
			num=datos[i];//num =2
		}

	
}
