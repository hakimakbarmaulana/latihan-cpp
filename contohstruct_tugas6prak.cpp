#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<string.h>

using namespace std;

struct mhs
{
    char nim[16];
	char nama[30];
    int nilai;
};
int main()
{
	int i,n,j;
	mhs mahasiswa[100];
	float rata=0;
	printf("JUMLAH MAHASISWA : ");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("NIM : ");scanf("%s",&mahasiswa[i].nim);
		printf("Nama Mahasiswa: ");scanf("%s",&mahasiswa[i].nama);
		printf("Nilai : ");scanf("%d",&mahasiswa[i].nilai);
		printf("\n");
		rata=rata+mahasiswa[i].nilai;
	}
	rata=rata/n;
	printf("\nMahasiswa Lulus");
	for(j=0;j<n;j++){
		if(mahasiswa[j].nilai>rata){
			printf("- %s\n",mahasiswa[j].nama);
		}
	}
	printf("\nMahasiswa Tidak Lulus");
	for(j=0;j<n;j++){
		if(mahasiswa[j].nilai<rata){
			printf("- %s\n",mahasiswa[j].nama);
		}
	}

	getch();
	return 0;
}
