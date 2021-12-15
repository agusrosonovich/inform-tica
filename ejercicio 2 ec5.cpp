#include <iostream>

using namespace std;
int main(){
	double M[][3]={0,1,2,3,4,5,6,7,8,10};
	
	for(int k=0; k<1;k++)
		for(int n=0; n<1;n++)
		
			M[k][n]=k+n;
			

	for(int k=0; k<1;k++)
		for(int n=0;n<1;n++)
			M[k][k]= M[k][n];
			
	cout<<M[2][0];
					
}
