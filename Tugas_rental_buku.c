/*
Nama : Dion Arya Pamungkas
Nim : 10517016
Program Rental Buku
*/
#include <stdio.h>
#include <conio.h>
int lama_menyewa; int denda;
char nama[20] = "Follow @dion_arya.p :D, Sang pembuat program :D";
void watermark(){
	printf("%c"), nama;
}
main(){
clrscr();
watermark();

printf("Selamat datang di Rental Buku Hallo\n");
printf("Masukan Lama Anda Menyewa : ");scanf("%d", &lama_menyewa);

if(lama_menyewa > 3){
denda = lama_menyewa*2000;
printf("Anda Sudah Lebih dari 3 hari tidak membalikan buku\n");
printf("Anda Dikenakan denda dan harus membayar %d", denda);
watermark();
}else{
printf("Anda Menyewa Buku nya selama %d Hari\n terimakasih telah membalikan bukunya", lama_menyewa);
watermark();
}

getch();
return 0;
}
