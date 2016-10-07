#include <stdio.h>
#include <stdlib.h> // atof için
#include <ctype.h>
/**************************/
/*  Wheat stone hesaplama */
/*     version 2          */
/*   r2 ve rx'den l1 ve l2*/
/**************************/
float float_al(void);
int main()
{
  float rx, r2=1, l1;
  printf("Programdan cikmak icin 0'a basiniz...\n");
  printf("Rx'i giriniz: ");
  rx=float_al();
  if( !rx ) //programdan direk çıkış için
    return 0; 
  while( r2 ) //sonsuz döngü
  {	  
    printf("R2'yi giriniz: ");
      r2=float_al();
    l1 = (100*rx)/(rx+r2);
    if( r2 != 0 )
      printf("L1: %0.2f, L2: %0.2f\n", l1, 100-l1 );
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
