#include <stdio.h>

int main()
{
	int time[50] = {};
	int kisiSayisi, maxKisi;
	int i;
	
	printf("kisi sayisini girin : ");
	scanf("%d",&kisiSayisi);
	
	printf("max kac kisi birlikte gecebilir : ");
	scanf("%d",&maxKisi);
	
	printf("sirasiyla gecme surelerini girin : ");
	for(i = 0; i < kisiSayisi; i++)
	{
		scanf("%d", &time[i]);
	}
	
	
	if(maxKisi ==1){
	    printf("kapasite 1 oldugundan çözüm yok.");
	    return 0;
	}
	
}
