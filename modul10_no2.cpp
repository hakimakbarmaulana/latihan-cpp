#include <iostream>
#include <conio.h>

using namespace std;

int deret(int a){
	if(a==1){
		return 1;
	}
	else{
		return deret(a-1)+2*a-1;
	}
}
int main()
{
	int n;
	cout<<"n : ";cin>>n;
	cout<<"Jumlah n bil ganjil pertama : "<<deret(n);
	getch();
	return 0;
}
