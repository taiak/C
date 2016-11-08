#include <stdio.h>

// Klavyeden alinan sayinin armstrong olup olmadigina bakar

int length( const char *pStr ) {
	int i;
	for( i = 0 ; ( *pStr ) != '\0' ; i++)
		pStr++;
	return i;
}
int power(int taban, int us){
    return (us != 0) ?(taban*power(taban, us-1)):1;
}
int atoi2(char *sayi_s, int uzunluk){
	char *pSayi = sayi_s;
	int sayi = 0, indis;
	for(indis = 0; ( *pSayi ) != '\0'; indis++){
		sayi += ((*pSayi)-48) * power(10, uzunluk-indis-1);
		pSayi++;
	}
	return sayi;
}
int armstrong_carpim(char* sayi_s, int uzunluk){
	char* pSayi = sayi_s;
	int toplam = 0, indis;
	for(indis = 0 ; indis < uzunluk ; indis++ ){
			toplam += power( (*pSayi++)-48 , uzunluk);
	}
	return toplam;
}
int armstrong_sayi_mi(void){
	char sayi_s[20] ;
	int uzunluk = 0, asil_sayi, toplam;
	printf("Bir sayı giriniz: ");
		scanf("%s", sayi_s);
	uzunluk = length( sayi_s );
	asil_sayi = atoi2( sayi_s ,uzunluk);
	toplam = armstrong_carpim(sayi_s, uzunluk);
	if( toplam != asil_sayi )
		return 0;
}
int main(){
	if(armstrong_sayi_mi())
		printf("Armstrong sayidir.\n");
	else
		printf("Armstrong sayi değildir.\n");
	return 0;
}
