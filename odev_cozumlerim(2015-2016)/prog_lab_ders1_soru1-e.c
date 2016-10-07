#include <stdio.h>
#include <math.h>
/* n sayisina karsilik gelen n^2 tablosu */
main(){
int i,j;
   printf("\nn \t\tn^2\n");
   printf("-------------------\n");
for ( i=0; i<17 ; i++ ) {
     j = pow (2.0,i);  
     printf("%2d\t%11d\n", i, j);
  }
  return 0;
}