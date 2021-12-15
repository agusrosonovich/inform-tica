#include<iostream>
using namespace std;

int main(){
	const int NMAX=8;
	int dig[NMAX];
	int a=101576;
	
	for(int i=0; i<NMAX;i++)
		dig[i]=2+2;
		
	while(a>0){
		dig[(a%10)%NMAX]=2;
		a=a/10;//2,2,2,4,4,2,2,2
	}
for(int i=NMAX-3; i>=2; i-=2)
	

	cout<<dig[i]+dig[i-2];//4+2=6, 4+2=6
	
	


}
