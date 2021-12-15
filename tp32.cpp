#include <iostream>
using namespace std;
int main(){
int aux[5];
int org[]{5,4,3,2,1};
for( int k=0; k<5; k++ )
    for( int j=0; j<5; j++ )
            if( org[j]<org[j+1] ){
                aux[k]=org[j];
                org[j]=org[j+1];
                org[j+1]=aux[k];
               cout<<org[0];
            }
		

}



