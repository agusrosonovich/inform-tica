#include <iostream>

using namespace std;

int main()
{
	const int DIM=5;
	
	int num[DIM]={3,3,4,6,5};
	
	int val, i , pos;
	
	pos= 0;
	
	val=num[pos];
	
	for(i=1; i<DIM-1;i++)//no sirve el for, num[1]=3< val=3
		if(num[i]<val){
			val=num[i];
			pos=i;
		}
	cout<<pos<<":"<<val;
}
