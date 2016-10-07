#include <stdio.h>
#include <ctype.h>

int main(void){
    int c;
    for( ; ; ) {      /*sonsuz döngü için*/
      c= getchar();     /*yazilanlari aliyor*/
      if (islower(c))   /*kucuk mu diye bakiyor*/
        c = toupper(c); /*kucukse buyutuyor*/
      else
        c = tolower(c); /*buyukse kucultuyor*/
      
      putchar(c);       /*karakteri ekrana basiyor*/
   } //for dongu sonu
   return 0;
  }