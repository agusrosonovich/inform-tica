#include<iostream>
using namespace std;
int main(){
	int a=-1;
	for(int n=3;n<9;n=n*2)
	a+=1;
	for(int n=12;n>=2;n-=3){
		a-=n;
		cout<<a<<endl;
	}
	
	cout<<a;
}
