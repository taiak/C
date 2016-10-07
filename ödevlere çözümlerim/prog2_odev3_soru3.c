#include <stdio.h>
/****************************/
/*        b_to_MB.c         */
/*    bit'i MB'ye cevirir   */
/****************************/
enum Boyutsal { bit=1 , byte=8*bit, KB=1024*byte, MB=1024*KB };

int main() {
  float mb,boyut;
    printf("Bit değeri giriniz\n");    
    scanf("%0.2f",&boyut);//ornekte 2 noktali yazildigindan %0.2f
    mb=(boyut/MB); 
    printf("Boyutu: %0.2f MB\n",mb);

   return 0;
}