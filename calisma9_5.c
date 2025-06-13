#include <stdio.h>
#include <stdlib.h>

//struct kullanimi 

struct kayit
{
	char ad[20];
	int no;
	int sinif;
	float ort;
};

int main() 
{
	struct kayit ogr;
	printf("ad soyad:");
	scanf("%s",&ogr.ad);
	printf("numara:");
	scanf("%d",&ogr.no);
	printf("sinif:");
	scanf("%d",&ogr.sinif);
	printf("ortalama:");
	scanf("%f",&ogr.ort);
	
	printf("%s\n",ogr.ad);
	printf("%d\n",ogr.no);
	printf("%d\n",ogr.sinif);
	printf("%f",ogr.ort);
	
	return 0;
}
