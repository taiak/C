#include "stdio.h"
// sonuclar karakter ( char ) olarak geliyorsa
// pointer kullan
macHesapla( const char * );
// girilen deger degistirilmeyecegi içn const char yap

int main(void)
{
    char sonuclar[] = {'2','1','0','0','2','1','1','2','1','0'};
	printf( "%d",macHesapla( sonuclar ) );
	return 0;
}
// Eger verilen dizi maci gecerse 1, yoksa 0 don 
int macHesapla( const char *sonuc )
{
  int  toplam = 0;
  for( ; ( *sonuc ) != '\0' ; sonuc++)
      if( ( *sonuc ) == '1' )
          toplam += 3;
      else if( ( *sonuc ) == '0' )
          toplam += 1;
  return (toplam > 11) ? 1 : 0 ;
}
