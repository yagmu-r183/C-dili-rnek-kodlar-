#include <stdio.h>
#include <stdlib.h>


int main() 
{
	char kitapad[30],yazar[30],kitapyazar[60];
	
	printf("kitap adi ve yazari gir:");
	scanf("%s%s",kitapad,yazar);
	strcat(kitapyazar,kitapad);
	strcat(kitapyazar," ");
	strcat(kitapyazar,"<-->");
	strcat(kitapyazar,yazar);
	printf("\n\n");
	printf("%s",kitapyazar);
	
	
	return 0;
}
