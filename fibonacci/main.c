#include <stdio.h>
#include <conio.h>
/* 

Nama : Dion Arya Pamungkas
Nim : 10517016
Bilangan Fibonacci

*/
main(){
int i, n, t1 = 0, t2 = 1, selanjutnya;

    printf("Masukan Jumlah bilangan ke n: ");
    scanf("%d", &n);
	
	printf("=======================\n");
    printf("== Bilangan Fibonacci : ==");
    printf("\n=======================\n");

    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", t1);
        selanjutnya = t1 + t2;
        t1 = t2;
        t2 = selanjutnya;
    }
    
    getch();
    return 0;
	
}
