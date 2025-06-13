#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int sayi=20;
	int *s=&sayi; // * ifadesi s nin adres tuttugunu belirtir
	
	// sayiyi ekrana yazdirma
	printf("deger:%d\n",sayi);
	
	// sayinin adresini ekrana yazdirma
	printf("adres:%x\n",s);
	
	char harf='a';
	char *h=&harf;
	printf("\n\n-------\n\n");
	
	printf("harf:%c\n",harf);
	
	printf("adres:%x",h);
	
	return 0;
}
