/*
Nama : Dion Arya Pamungkas
NIM : 10517016
Program Menghitung Luas Segitiga, Lingkarang dan persegi panjang

*/
#include <stdio.h>
#include <conio.h>
int pilihan, tinggi, alas, jari_jari;
float hasil;
main(){
clrscr();

printf("Selamat Datang Di Program menghitung luas");
printf("\n1. Hitung Luas Segitiga");
printf("\n2. Hitung Luas Lingkaran");
printf("\n3. Hitung Luas Persegi Panjang");
printf("\nMasukan pilihan anda 1-3...");
scanf("%d", &pilihan);

switch(pilihan){
case 1:
clrscr();
printf("Selamat Datang Di Penghitung Luas Segitiga\n");
printf("Masukan Alas (Satuan CM) : ");scanf("%d", &alas);
printf("Masukan Tinggi (Satuan CM) : ");scanf("%d", &tinggi);
hasil = alas*tinggi;
hasil = hasil*1/2;
printf("Luasnya adalah %.1f CM Pangkat 2 \n", hasil);
break;

case 2:
clrscr();
printf("Selamat Datang Di Program Penghitung Luas Lingkaran\n");
printf("Masukan Jari-Jari Lingkarang (satuan cm) : ");
scanf("%d", &jari_jari);
jari_jari = jari_jari*jari_jari;
hasil = 3.14*jari_jari;
printf("Luas Lingkarang nya adalah %.2f Cm ", hasil);

break;

case 3:
clrscr();
printf("Selamat Datang Di program penghitung luas persegi pangjang\n");
printf("Masukan Alas (dalam cm) : ");scanf("%d", &alas);
printf("Masukan Tinggi (dalam cm) : ");scanf("%d", &tinggi);
hasil = alas*tinggi;
printf("Luas Peersegi panjang nya adalah %.0f Cm Pangkat 2", hasil);
break;
default:
clrscr();
printf("Pilihan tidak Terdaftar");
break;

}
getch();
return 0;
}
