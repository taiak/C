#include <stdio.h>
#include <stdlib.h> /* abs fonksiyonu icin */
/*
  Girilen pozitif tek sayiya uygun olarak ekrana kum saati basar.
*/
void kereCharBas(unsigned short int kere, char karakter){
	for(; kere > 0 ; kere--)
		putchar(karakter);
}
int main(){
	unsigned short int i, sayi = 0, yarim;
	while(!(sayi%2 && sayi>0)){
		printf("Pozitif tek bir sayi giriniz: ");
		scanf("%hu",&sayi);
	}
	for(i = 0; i <= sayi; i++){
		yarim = (sayi + 1)/2;
		kereCharBas(abs( (i >= yarim)*(yarim - 1)- i%yarim ),' ');
		kereCharBas(abs( sayi - 2*i ),'*');
		putchar('\n');
	}
	return 0;
}
