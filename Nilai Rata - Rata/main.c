#include <stdio.h>
#include <conio.h>
/*
nama : Dion Arya Pamungkas
nim 10517016
Mencari Nilai Rata-Rata
*/
int inputan, i, bil;
float hasil;
main(){
	
	printf("Masukan Jumlah Bilangan : ");
	scanf("%d",&inputan);
	
	for(i=1;i<=inputan;i++){
		printf("Masukan Bilangan Ke %d : ");
		scanf("%d", &bil);
		hasil += bil;
	}
	
	printf("Rata - Rata Nya adalah = %.2f", hasil/inputan);
	
	getch();
	return 0;
}
