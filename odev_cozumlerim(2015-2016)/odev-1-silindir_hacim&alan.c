#include <stdio.h>
/***********************************************/
/*                                             */
/*         silindir_hacim&alan.c               */ 
/*silindirin hacmini ve alanini bulan program  */
/*                                             */
/***********************************************/

int main(void) {
   float h, r, hacim ,alan;
   printf("\nLutfen silindirin yarıcap(r) degerini giriniz?: ");
    scanf("%f" ,&r);
   printf("\nLutfen silindirin yukseklik(h) degerini giriniz?: ");
    scanf("%f" ,&h);
   
  const int pi=3; /* pi'nin değeri 3 alınmıştır */
   alan = pi*r*r*h; /* alan = pi*(r*r)*h */
   hacim= 2*pi*r*h; /* hacim = 2*pi*r*h */ 

   printf("\nSilindir'in yuzey alani: %.0f ve" 
   "hacmi:%.0f\n\n", alan, hacim);
   /* tam hesaplama için "%.0f" yeri duzenlenebilir */  
   return 0;
}
