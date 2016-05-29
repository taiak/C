#include <stdio.h>
#include <stdlib.h> // atof için
#include <ctype.h> // Ýsdigit icin
//geliþtirilmesi lazým
float float_al(void);
int main()
{
  float Float;
  Float=float_al();
  
  printf("%f\n",Float);
  return 0;   
}
float float_al(void)
{ 
  char dizi[30],c,i;
  char *p = &dizi[0];
  float sayi;
  c = getchar();
  for(  ; (! isspace(c)) ; ( c=getchar() ) )
   {
	   if( isdigit(c) )
         *p = c;
	   else if( (c == ',') || (c=='.'))//veya ispunct(c)
	     *p = '.';
	   else
	     continue; 
     p++;
   }
   sayi = atof( dizi );
   printf("\n");
   
   return sayi;
}
