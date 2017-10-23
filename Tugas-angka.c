#include <stdio.h>
#include <stdlib.h>
/*

Dion Arya Pamungkas

*/

int bil1, bil2, bil3, i;
main() {

	printf("Masukan Bilangan Pertama : ");
	scanf("%d", &bil1);
	printf("Masukan Bilangan Kedua : ");
	scanf("%d", &bil2);
	printf("Masukan Bilangan Ketiga : ");
	scanf("%d", &bil3);
	
	printf("\n===================================\n");
	
	if(bil1 > bil2 && bil1 > bil3){
				
		if(bil2 > bil3){
			printf("angka nya : \n %d \n %d \n %d", bil1, bil2, bil3);
		}else{
			printf("angka nya : \n %d \n %d \n %d", bil1, bil3, bil2);
		}	
		
	}else if(bil2 > bil1 && bil2 > bil3){
		
		if(bil1 > bil3){
			printf("angka nya : \n %d \n %d \n %d", bil2, bil1, bil3);
		}else{
			printf("angkanya : \n %d \n %d \n %d", bil2, bil1, bil3);
		}
		
	}else if(bil3 > bil1 && bil3 > bil2){
		if(bil1 > bil2){
			printf("angkanya : \n %d \n %d \n %d", bil3, bil1, bil2);
		}else{
			printf("angkanya: \n %d \n %d \n %d", bil3, bil2, bil1);
		}
	}
	

getch();
return 0;
}
