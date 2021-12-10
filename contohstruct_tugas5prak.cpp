#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<string.h>

using namespace std;

struct mhs_pemdas{
    char nama[30];
    int bulan;
};
int main(){
	int i,n,j;
	char nama_bulan[13][10]={"JANUARI","FEBRUARI","MARET","APRIL","MEI","JUNI",
					"JULI","AGUSTUS","SEPTEMBER","OKTOBER","NOVEMBER","DESEMBER"};
	mhs_pemdas mahasiswa[100];
	printf("JUMLAH MAHASISWA : ");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Nama Mahasiswa: ");scanf("%s",&mahasiswa[i].nama);
		printf("Bulan Lahir : ");scanf("%d",&mahasiswa[i].bulan);
		printf("\n");
	}
	printf("\n");
	for(i=0;i<12;i++)
	{
		printf("Bulan:%s\n",nama_bulan[i]);
		for(j=0;j<n;j++){
			if(mahasiswa[j].bulan==i+1){
				printf("- %s\n",mahasiswa[j].nama);
			}
		}
		printf("\n");
	}
	getch();
	return 0;
}
