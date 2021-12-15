#include <stdio.h>

int main (){
	int vector[]={1,2,3,4,5,6,7,8,9};
	int i;
	int pares[4]={0};
	int impares[4]={0};
	
	for (i=0;i<9;i++){
		if ((vector[i]%2)!=0){
			impares[i]=vector [i];
			printf ("%d",impares[i]);
			
		}
	}
	printf ("\n");
	for (i=0;i<9;i++){
		if ((vector[i]%2)==0){
			pares[i]=vector [i];
			printf ("%d",pares[i]);
			
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
return 0;	
}
