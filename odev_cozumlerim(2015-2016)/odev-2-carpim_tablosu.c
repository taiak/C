/* carpim tablosu 10x10 */
#include <stdio.h>
int main() {
 int i,j,k;
 printf(" Carpim Tablosu...\n");
 printf(" =================\n\n");
   for ( i=1 ; i<11 ; i++ ) {
     k = 0;
     
     for ( j=1 ; j<11 ; j++ ) {
       k = i*j;
       printf("%d\t",k);
      }
     printf ("\n");
    }
return 0;
}
