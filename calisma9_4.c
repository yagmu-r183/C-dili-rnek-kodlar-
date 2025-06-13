#include <stdio.h>
#include <stdlib.h>

    struct kitapbilgi
    {
	char kitapad[20];
	char yazar[20];
	int fiyat;
	float puan;
	
    };
    int main() 
    {
	struct kitapbilgi kb={"baslangic","dan brown",30,9.67};
	printf("kitapad:%s\n",kb.kitapad);
	printf("yazar:%s\n",kb.yazar);
	printf("fiyat:%d\n ",kb.fiyat);
	printf("puan:%.2f",kb.puan);
	
	return 0;
    }
