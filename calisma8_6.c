#include <stdio.h>
#include <stdlib.h>
//sin cos sinus cosinus islemlerini yapar

int main() 
{
	double derece,sonucsin,sonuccos;
	printf("dereceyi girin:");
	scanf("%lf",&derece);
	
	sonucsin=sin(derece);
	printf("sinus:%lf\n",sonucsin);
	
	sonuccos=cos(derece);
	printf("cosinus:%lf",sonuccos);
	
	return 0;
}
