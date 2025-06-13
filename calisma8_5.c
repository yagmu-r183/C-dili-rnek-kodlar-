#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* fabs mutlak deger alir
sqrt karekok alir
pow us alir
fabs mutlak alir
log ln alir*/
int main() 
{
	double sayi,sonuc,sonuc2;
	printf("sayi girini:");
	scanf("%lf",&sayi);
	sonuc=fabs(sayi);
	printf("sonuc:%.lf",sonuc);
	printf("\n");
	//bu islem e tabaninda gerceklesir
	sonuc2=log(sayi);
	printf("sonuc log:%.3lf",sonuc2);
	
	return 0;
}
