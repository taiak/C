1-

a)
int faktoriyel(int n){
   int i=2 ,carpim=1;
   while(i<=n) carpim*=i;
   return carpim
}
b)
#include <stdlib.h>
double rastgele_ondalikli(){
   /* [0 , 1) aralığında rastgele sayılar üret */
   double sayi = (double) rand();
   return sayi / (RAND_MAX + 1);
}
int geometrik_rastgele_deger (double p){
  double q;
  int n = 0;
    q = rastgele_ondalikli();
    n++;
  while( q >= p ){
    q = rastgele_ondalikli();
    n++;
  }
  return n;
}
