#include <stdio.h>
#include <stdlib.h>

// geriye donebilen fonksiyon**return fonksiyonu geri cagirir

int toplam(int s1,int s2)
{
	int s3;
	s3=(s1+s2)*5-10;
	return s3;
}

int main() 
{
	int t;
	t=toplam(5,4);
	printf("%d\n",t);
	
	t=toplam(2,3);
	printf("%d",t);
	
	return 0;
}
