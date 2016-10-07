#include <stdio.h>
#include <ctype.h>

int main(void){
    int c;
    while( c != EOF ) {      /*sonsuz döngü için*/
    c= getchar();     /*yazilanlari aliyor*/
    c = tolower(c); /*karakterleri kucultuyor*/
      
    putchar(c);   /*karakteri ekrana basiyor*/
   } //for dongu sonu
   return 0;
  }