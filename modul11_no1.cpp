#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;

int main(){
	char nama[100][30],kota_asal[100][15],temp[3];
	int n,i;
	cout<<"Banyak data:";
	cin>>n;
	for(i=1;i<=n;i++){
		cout<<"Nama ke"<<i<<" :";
		cin>>nama[i-1];
		cout<<"Kota ke"<<i<<" :";
		cin>>kota_asal[i-1];
	}
	for(i=1;i<=n;i++){
		temp[0]=tolower(kota_asal[i-1][0]);
		temp[1]=kota_asal[i-1][1];
		if(strcmp(temp,"ma")==0){
			cout<<nama[i-1]<<"\n";
		}
	}
	getch();
	return 0;
}
