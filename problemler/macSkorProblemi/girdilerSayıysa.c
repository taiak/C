#include "stdio.h"
// sonuclar sayi olarak geliyorsa
// 0, eof olarak okunacaktir.

macHesapla( char * );
//mac hesaplarinin aldigi ilk indis 
//sonuclar kumesinin asil eleman sayisidir

int main(void)
{
    char sonuclar[] = {10, 2, 1, 0, 0, 2, 1, 1, 2, 1, 0};
	printf( "%d",macHesapla( sonuclar ) );
	return 0;
}
// eger gecer puanlari varsa 1, yoksa 0 doner
int macHesapla( char *sonuc )
{
  int  toplam = 0, bitis = *sonuc ;

	for(sonuc++ ; bitis > 0 ; sonuc++, bitis-- )
    if( ( *sonuc ) == 1 )
		    toplam+=3;
    else if( ( *sonuc ) == 0 )
        toplam+=1;

  return (toplam > 11) ? 1 : 0 ;
}
