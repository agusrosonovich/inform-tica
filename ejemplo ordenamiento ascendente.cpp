#include <iostream>
using namespace std;
int main(){
	int org[]= {7,8,9,5,4,6,1,3,2};
	int aux, min, i, j ;
	for(i=0; i<9; i++ ){
    	min=i;
    	for( j=i+1; j<9; j++ ){
        	if(org[j]<org[min]){
            	min=j;
        }
    }
    	aux = org[i];
    	org[i] = org[min];
    	org[min] = aux;
}
for(i=0;i<9;i++){

cout<<org[i];
}
}
