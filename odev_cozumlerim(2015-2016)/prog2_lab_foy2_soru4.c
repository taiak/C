#include <stdio.h>
#include <stdlib.h> /*atoi için*/

/***************************************/
/*        sayi_topla.c                 */
/*                                     */ 
/*  verilen aralıktaki sayilari toplar */
/***************************************/

int main(int argc, char *argv[]){
    int alt, ust, toplam, i;
    alt = atoi( argv[1] ); /* alt => alt sinir */
    ust = atoi( argv[2] ); /* ust => ust sinir */
    if ( alt>ust ) {  /*ustun alttan buyuk olmasını saglıyor */
      toplam = ust;
      ust = alt;
      alt = toplam;
    }
    printf("%d ile %d arasindaki sayilarin toplami: ",alt,ust);
    if(ust-alt > 7) {  /* eger 7 islemden fazla surerse karmasıklıgı sabitliyor */
      toplam = topla(alt,ust);
      goto etiket_1;
    }
    toplam = 0;
    i=alt;
    etiket_2:
        toplam=toplam+i;
        i++;
    if (ust >= i) goto etiket_2;
    etiket_1:
    printf("%d\n",toplam);
  
    return 0;
  }

int topla(int a, int b){
  int toplami =((b*b+b)-(a*a+a)/2);
  return toplami;
  }


