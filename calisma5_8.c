#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
		   printf("*");
		}
		printf("\n");
		
		
	}
	for(i=1;i<=5;i++)
	{
		for(k=5;k>=i;k--)
		{
		   printf("*");	
		}
		printf("\n");
	
	}
	
	return 0;
}
