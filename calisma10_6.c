#include <stdio.h>
#include <stdlib.h>

int kupbul(int sayi)
{
	int sonuc=sayi*sayi*sayi;
	return sonuc;
}
int main() 
{
	int sayi;
	printf("sayiyi girin:");
	scanf("%d",&sayi);
	printf("\n\nsonuc:%d",kupbul(sayi));
	return 0;
}
