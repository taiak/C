#include <stdio.h>
#include <math.h> /*pow fonksiyonu icin*/
#include <stdlib.h> /*atoi fonksiyonu icin*/
/**************************************/
/* ikinci dereceden tek bilinmeyenli  */
/* denklemlerde kok bulma fonksiyonu  */
/*      2_derece_kok_bul.c            */
/**************************************/

int main(int argc, char *argv[]) {
    int a,b,c,delta;
    float kok1,kok2;
    a = atoi( argv[1] );
    b = atoi( argv[2] );
    c = atoi( argv[3] );
    delta = pow(b,2)-4*a*c ;
    
    if (delta>0) {

        kok1 = (-b - pow( delta , 0.5 ) ) / (2*a);
        kok2 = (-b + pow( delta , 0.5 ) ) / (2*a); 
        printf("\n   Denklemin reel sayilarda iki farkli koku vardir.\n");
        printf("\n   Kokler:\n   x1: %1.2f ve x2: %1.2f \n",kok1,kok2);  
      }
   else if ( (delta+1) == 1 ) {
        
        kok1 = (-b - pow( delta , 0.5 ) ) / (2*a);
        
        printf("\n   Denklemin reel sayilarda iki ayni koku vardir.\n");
        printf("\n   Kokler:\n   x1, x2: %1.2f \n",kok1);
      }
   else {
        kok1 = ( -b/2*a ); /*kok1 burda kok degeri degil.*/
        delta = abs( delta ); /*delta negatif olduğundan ,pow hata vermesin diye*/
        kok2 = ( pow( delta , 0.5 ) / (2*a) );  /*kok2 burda kok degeri degil.*/
        printf("\n   Denklemin reel sayilarda koku yoktur.\n");
        printf("   Karmasik sayilarda iki koku vardir.\n");
        printf("\n   Kokler:\n   x1: %1.2f + %1.2fi ve x2: %1.2f - %1.2fi\n\n",kok1,kok2,kok1,kok2);      
      }    


   return 0;
}