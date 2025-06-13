#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* floor girilen degere en yakin kucuk int degeri alir
 ceil girilen degerden buyuk en kucuk int degeri alir*/

int main() 
{
	double sayi,sonuc1,sonuc2;
	printf("sayi gir:");
	scanf("%lf",&sayi);
	sonuc1=floor(sayi);
	printf("sonuc:%lf",sonuc1);
	printf("\n");
	sonuc2=ceil(sayi);
	printf("sonuc:%lf",sonuc2);
	return 0;
}
