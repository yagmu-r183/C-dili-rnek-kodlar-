#include <stdio.h>
#include <stdlib.h>

void dortgen(int en,int boy)
{
	int i,j;
	for(i=0;i<boy;i++)
	{
		for(j=0;j<en;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

int main() 
{
	dortgen(3,5);
	
	return 0;
}
