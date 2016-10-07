#include <stdio.h>
#include <stdlib.h> // atof için
#include <ctype.h>
#include <math.h>
/**************************/
/*  kondansator hesaplama */
/*     version 2          */
/**************************/
float float_al(void);
int main()
{
  float r,c,vab,v0=1,t;
  printf("Programdan cikmak icin 0'a basiniz...\n");
  printf("R'yi giriniz: ");
  r=float_al();
  printf("C'yi giriniz: ");
  c=float_al();
  printf("V0'i giriniz: ");
  v0=float_al();
  while( vab ) //v0 0 olana kadar
  {
    printf("Vab giriniz...");
    vab = float_al();
    t = r*c*( log(v0/vab) );
    printf("t=%f\n",t);
   
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
   printf("\n");
   
   return sayi;
}