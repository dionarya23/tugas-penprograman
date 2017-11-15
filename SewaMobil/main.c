#include <stdio.h>
#include <conio.h>

int paket_sewa, jasa_supir, keterlambatan, total;
main() {
	system("cls");
	printf("Masukan Paket yang Anda Inginkan\n1. Paket I Sewa 12 Jam Biaya 300.000\n2. Paket II Sewa 24 Jam 24 Jam Biaya 500.000\n");
	printf("Masukan Pilihan : ");scanf("%d", &paket_sewa);
	printf("Apakah Anda Ingin Memakai Jasa Supir ?\n");
	printf("1.Ya\n2.Tidak\n Masukan Pilihan: ");scanf("%d", &jasa_supir);
	printf("Berapa Jam Anda Menyewa : ");scanf("%d", &keterlambatan);
	
	switch(paket_sewa){
		case 1:
		if(keterlambatan > 12){
			
			total = (keterlambatan-12)*50000;
			total = (jasa_supir==1) ? (total+300000)+15000 : total+300000;
			printf("Anda Menyewa Mobil Dengan Paket 1\n Harga : Rp.300.000 \nLama Menyewa : %d Jam\nJumlah Yang Dibayar: Rp %d", keterlambatan, total);

		}else{
			total = (jasa_supir==1) ? (total+300000)+15000 : total+300000;
			printf("\n\n=====================================================\n");
			printf("Anda Menyewa Mobil Dengan Paket 1\n Harga : Rp.300.000 \nLama Menyewa : %d Jam\nJumlah Yang Dibayar: Rp %d", keterlambatan, total);
		}	
	   break;
	   
	   case 2 :
	   	if(keterlambatan > 12){
			
			total = (keterlambatan-24)*50000;
			total = (jasa_supir==1) ? (total+500000)+15000 : total+500000;
			printf("Anda Menyewa Mobil Dengan Paket 1\n Harga : Rp.300.000 \nLama Menyewa : %d Jam\nJumlah Yang Dibayar: Rp %d", keterlambatan, total);

		}else{
			total = (jasa_supir==1) ? (total+50000)+15000 : total+500000;
			printf("\n\n=====================================================\n");
			printf("Anda Menyewa Mobil Dengan Paket 1\n Harga : Rp.300.000 \nLama Menyewa : %d Jam\nJumlah Yang Dibayar: Rp %d", keterlambatan, total);
		}
	   	break;
	}
	
	getch();
	return 0;
}
