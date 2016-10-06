#include <stdio.h>
#include <stdlib.h> // atof icin
#include <ctype.h> // isdigit icin
//gelistirilmesi lazim
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
	   else if( (c == ',') || (c=='.'))//veya ispunct(c
	     *p = '.';
	   else
	     continue; 
     p++;
   }
   sayi = atof( dizi );
   printf("\n");
   
   return sayi;
}
int main()
{
  float noktali;
  noktali=float_al();
  
  printf("%f\n",noktali);
  return 0;   
}
