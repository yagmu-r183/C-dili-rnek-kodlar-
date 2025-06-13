#include <stdio.h>
#include <stdlib.h>


int main() 
{
	char harf='k';
	char *pt=&harf;
	printf("adres:%x\n",pt); //62fe17
	
	pt++;
	printf("adres2:%x\n",pt); //62fe18
	
	pt--;
	printf("adres3:%x\n",pt); //62fe17
	
	pt+=5;
	printf("adres4:%x",pt); //62fe1c
	
	
	return 0;
}
