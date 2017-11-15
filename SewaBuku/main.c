#include <stdio.h>
#include <conio.h>

int lama, pilihan, total_bayar, lewat, banyak_buku, harga, denda;
main() {
	clrscr();
	printf("Masukan Lama Menyewa Buku dalam (hari) : ");scanf("%d", &lama);
	printf("Apakah Anda Termasuk Anggota ? \n");
	printf("1. Ya \n2. Tidak");
	printf("\n Masukan Pilihan : ");scanf("%d", &pilihan);
	printf("Banyak Nya Buku : ");scanf("%d", &banyak_buku);
	
	
	if(pilihan == 1){
		if(lama > 3){
			printf("\n\n");
			harga = banyak_buku*1500;
			denda = banyak_buku*750;
			lewat = (lama-3)*denda;
			total_bayar = harga + lewat;
			printf("Anda Menyewa %d Buku \n Anda Telah Menyewa Buku Lebih dari 3 hari\n maka jumlah yang harus dibayar : Rp. %d", banyak_buku, total_bayar);
	
		}else{
				printf("\n\n");
			harga = banyak_buku*1500;
			total_bayar = harga;
			printf("Anda Menyewa %d Buku \n  maka jumlah yang harus dibayar : Rp. %d", banyak_buku, total_bayar);
	
		}
	}else{
		if(lama > 3){
			printf("\n\n");
			harga = banyak_buku*2000;
			denda = banyak_buku*100;
			lewat = (lama-3)*denda;
			total_bayar = harga + lewat;
			printf("Anda Menyewa %d Buku \n Anda Telah Menyewa Buku Lebih dari 3 hari\n maka jumlah yang harus dibayar : Rp. %d", banyak_buku, total_bayar);
	
		}else{
				printf("\n\n");
			harga = banyak_buku*2000;
			total_bayar = harga;
			printf("Anda Menyewa %d Buku \n  maka jumlah yang harus dibayar : Rp. %d", banyak_buku, total_bayar);
	
		}
	}
	
	getch();
	return 0;
}
