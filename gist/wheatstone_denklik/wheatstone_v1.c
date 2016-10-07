#include <stdio.h>
#include <stdlib.h> // atof için
#include <ctype.h>
/**************************/
/*  Wheat stone hesaplama */
/*     version 2          */
/*    r2 ve l1'den  rx    */
/**************************/
float float_al(void);
int main()
{
  float rx, r2, l1=1;
  printf("Programdan cikmak icin 0'a basiniz...\n");
  printf("R2'i giriniz: ");
  r2=float_al();
  if( !r2 ) //programdan direk çıkış için
    return 0; 
  while( l1 ) //sonsuz döngü
  {	  
    printf("L1'i giriniz: ");
      l1=float_al();
    rx = (l1*r2)/(100-l1);
    if( l1 != 0 )
      printf("Rx: %f\n", rx );
  }
  return 0;   
}
float float_al(void)
{ 
  char dizi[30],c,i;
  float sayi;
  c = getchar();
  for( (i = 0) ; (! isspace(c)) ; ( c=getchar() ) )
   {
	 if( isdigit(c) )
       dizi[i] = c;
	 else if( (c == ',') || (c=='.'))//veya ispunct(c)
	   dizi[i] = '.';
	 else
	     continue; 
     i++;
   }
   sayi=atof(dizi);
   
   return sayi;
}