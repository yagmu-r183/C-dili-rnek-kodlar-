#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int baksayisi,i;
	baksayisi=1;
	for(i=1;i<=24;i++)
	{
		baksayisi=2*baksayisi;
	}
	printf("bakteri sayisi:%d",baksayisi);
	
	return 0;
}
