#include <stdio.h>
int bubble(int * baslangic, int boyut){
	int * pDizi = baslangic;
	int i,tmp;
	boyut = boyut - 1 ;
	if(boyut){
		for(i = 0 ; i < boyut; i++){
			if( (*pDizi) > (*(pDizi+1)) ){
				tmp = *pDizi;
				*pDizi = *(pDizi+1);
				*(pDizi+1) = tmp;
			}
			pDizi++;
    }
		return bubble(baslangic, boyut );
	}
  else
	  return 0;
}
int main(){
	int dizi[]={ 36,97,56,77,68,21,83,87,4,61,27};
	int boyut = sizeof(dizi)/sizeof(int);
	int i;
  	printf("dizi= ");
	for(i = 0; i < boyut; i++){
		printf("%d ", dizi[i]);
	}
	printf("\nBubble Sort başlatıldı\n");
	i=bubble(dizi, boyut);
	printf("\nİşlem tamamlandı listenin son hali aşağıdaki gibidir\n");
	for(i = 0; i < boyut; i++){
		printf("%d ", dizi[i]);
	}
	putchar('\n');
	return 0;
}
