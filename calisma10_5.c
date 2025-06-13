#include <stdio.h>
#include <stdlib.h>

int toplam(int s1,int s2)
{
	int s3;
	s3=(s1+s2)*2-5;
}

int main() 
{
	int t,s1,s2;
	printf("s1 sayisi girin:");
	scanf("%d",&s1);
	printf("s2 sayisi girin:");
	scanf("%d",&s2);
	
	t=toplam(s1,s2);
	printf("%d",t);
	
	
	return 0;
}
