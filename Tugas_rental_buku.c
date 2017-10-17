/*
Nama : Dion Arya Pamungkas
Nim : 10517016
Program Rental Buku
*/
#include <stdio.h>
#include <conio.h>
int lama_menyewa; int denda;
main(){
clrscr();

printf("Selamat datang di Rental Buku Hallo\n");
printf("Masukan Lama Anda Menyewa : ");scanf("%d", &lama_menyewa);

if(lama_menyewa > 3){
denda = lama_menyewa*2000;
printf("Anda Sudah Lebih dari 3 hari tidak membalikan buku\n");
printf("Anda Dikenakan denda dan harus membayar %d", denda);

}else{
printf("Anda Menyewa Buku nya selama %d Hari\n terimakasih telah membalikan bukunya", lama_menyewa);

}

getch();
return 0;
}
