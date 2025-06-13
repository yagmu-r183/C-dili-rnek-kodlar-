#include <stdio.h>
#include <stdlib.h>

//enum yapisi 

enum sehirler
{
	hatali,adana,adiyaman,afyon,agri,amasya
};

int main() 
{
	enum sehirler il;
	il=amasya;
	printf("%d",il);     
	
	return 0;
}
