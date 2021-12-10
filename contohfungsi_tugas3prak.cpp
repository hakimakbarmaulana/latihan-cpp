#include <conio.h>
#include <iostream>

using namespace std;

int maks(int n,int a[]){
	int max=a[0],i;
	for(i=1;i<=n;i++){
		if(max<=a[i-1]){
			max=a[i-1];
		}
	}
	return max;
}

int mini(int n,int b[]){
	int min=b[0],i;
	for(i=1;i<=n;i++){
		if(min>=b[i-1]){
			min=b[i-1];
		}
	}
	return min;
}

float rata(int n,int c[]){
	int i;
	float mean=0;
	for(i=1;i<=n;i++){
		mean=mean+c[i-1];
	}
	return mean/n;
}
int main(){
	int n,i,data[100];
	cout<<"Banyak data:";
	cin>>n;
	for(i=1;i<=n;i++){
		cout<<"Data ke"<<i<<" :";
		cin>>data[i-1];
	}
	cout<<"\nRata-rata :"<<rata(n,data);
	cout<<"\nNilai Maksimal :"<<maks(n,data);
	cout<<"\nNilai Minimal :"<<mini(n,data);
	getch();
	return 0;
}
