#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int sayi=10;
	int sayi2=20;
	double sayi3=10.25;
	char kelime='a';
	
	printf("%d\n",sayi);
	printf("%d\n",sayi2);
	printf("%f\n",sayi3);
	printf("%c",kelime);
	
	printf("\n\n bellek adresleri \n\n");
	
	printf("%x\n",&sayi);
	printf("%x\n",&sayi2);
	printf("%x\n",&sayi3);
	printf("%x",&kelime);
	
	
	return 0;
}
