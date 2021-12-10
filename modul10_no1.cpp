#include <iostream>
#include <conio.h>

using namespace std;

int pangkat(int x,int y){
	if(y==1){
		return x;
	}
	else{
		return pangkat(x,y-1)*x;
	}
}
int main()
{
	int x,y;
	cout<<"x : ";cin>>x;
	cout<<"y : ";cin>>y;
	cout<<"x^y : "<<pangkat(x,y);
	getch();
	return 0;
}
