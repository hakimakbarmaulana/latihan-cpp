#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;

int main(){
	char nama[20],nama2[20];
	char *ptr;
	int pos;
	cout<<"Nama mu:";
	gets(nama);
	cout<<"Nama asli :"<<nama;
	strlwr(nama);
	strrev(nama);
	nama[0]=toupper(nama[0]);
	ptr=strchr(nama,' ');
	pos=ptr-nama+1;
	nama[pos]=toupper(nama[pos]);
	cout<<"\nNama terbalik :"<<nama;
	getch();
	return 0;
}
