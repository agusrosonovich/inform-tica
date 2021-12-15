#include <iostream>
using namespace std;
int main(){
	const int nmax=3;
	int M[nmax][nmax], a=0, b=0;
	
	for(int k=0; k<nmax; k++)
		for(int n=0; n<nmax; n++)
			M[k][n]= n-1*k;
	
	a=M[0][0];
	
	for(int n=0; n<nmax-1;n++)
		for(int k=0; k<nmax-2;k++)
			if(M[k][n]>a)	//a=1
			
			a=M[k][n];
			
	b=M[0][0];
	for(int n=0;n<nmax-1; n++)
	
		if(M[n][n+1]<b)
		
			b=M[n][n+1];
			//b=0
	
	cout<<a-b;
	
	
	return 0;		
		
							
}
