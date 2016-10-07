#include <stdio.h>
#include <stdlib.h>
/******************************/
/*    hesap_makinası.c        */
/*  -islem onceliksiz         */
/*  -sayilar parametre olarak */
/*  - carpma islemi x ile     */
/******************************/
int main( int argc , char *argv[] )
  {
     float toplam ,sayi;
     int k=2;
     char opera; //operator
   if(argc<4)
     {      
       printf("İslem icin yetersiz arguman girildi.\n");
       printf("İslem yapilamaz!!!\n");
       exit(0);
     }
   if( argc%2==0 ) 
    {  
     sscanf( argv[1], "%f", &toplam);
     sscanf( argv[2], "%c", &opera );
     sscanf( argv[3], "%f", &sayi );
     while(k!=argc){
       switch(opera)
       {
        case'+':
          toplam=(toplam+sayi);
          break;
        case '-':
          toplam=(toplam-sayi);
          break;
        case 'x':  // * terminalde farkli algilaniyor
          toplam= (toplam*sayi);
          break;
        case '/':
          if(toplam!=0)  
           {
             if (sayi==0)
              {
               printf("sayi / 0 = 'sonsuz'\n");
               exit(0);
              }
             else toplam= (toplam/sayi);
          }
          else 
           {
            if(sayi!=0) toplam=0;
            else {
               printf("0/0 belirsizliği.\n");
               exit(0);
                 }
           }
          break;
       }
      k=k+2;
      if(k<argc) {
      sscanf( argv[k], "%c", &opera );
      sscanf( argv[(k+1)], "%f", &sayi );   
        }
     } 
    }
    else
       { 
      printf("Yetersiz arguman girildi!!!\n");
      exit(0);
        }
    printf("Sonuc :%0.3f\n",toplam);
    return 0;
}
 