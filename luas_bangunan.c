#include <stdio.h>
#include <stdlib.h>
int pilih, sisi, hasil, panjang, lebar, alas, tinggi;
float hasil_segi;

main() {
	printf("===================\n");
	printf("        MENU       \n");
	printf("===================\n");
	printf("1. Persegi\n");
	printf("2. Persegi Panjang\n");
	printf("3. Segitiga\n");
	printf("Input Pilihan Anda [1/2/3] : ");scanf("%d", &pilih);
	
	switch(pilih){
		case 1:
			printf("\n\n");
			printf("PROGRAM MENGHITUNG LUAS PERSEGI\n");
			printf("Masukan Nilai sisi: ");scanf("%d", &sisi);
			hasil = sisi*sisi;
			printf("Luas Nya Adalah : %d", hasil);
			break;
			
		case 2:
			printf("\n\n");
			printf("PROGRAM MENGHITUNG LUAS PERSEGI PANJANG\n");
			printf("Masukan Nilai Panjang: ");scanf("%d", &panjang);
			printf("Masukan Lebar : ");scanf("%d", &lebar);
			hasil = panjang*lebar;
			printf("Luas Nya Adalah : %d", hasil);
			break;
			
		case 3:
			printf("\n\n");
			printf("PROGRAM MENGHITUNG LUAS SEGITIGA\n");
			printf("Masukan Nilai Alas: ");scanf("%d", &alas);
			printf("Masukan Tinggi : ");scanf("%d", &tinggi);
			hasil_segi = alas*tinggi;
			hasil_segi = hasil_segi*1/2;
			
			printf("Luas Nya Adalah : %.1f", hasil_segi);
		   break;
			
			default:
				printf("Pilihan Tidak Terdaftar");	
			break;
	}
	
	
	getch();
	return 0;
}
