#include <stdio.h>
#include <ctype.h>
#define SON_MU(a)  ( a != EOF )
#define HARF_AL(c) ( c = getchar() )
#define BOSLUK_MU isspace
#define HARF_Mi isalpha
#define SAYI_MI isdigit

void karakter_yogur( char ); //karakterleri sıkıştırır
void karakter_yay( char );  //karakterleri ac

int main()
{
 char chr;
 do{//sayi veya harf olana kadar al
  HARF_AL(chr);
 }while( !SAYI_MI(chr) && !HARF_Mi(chr) );
 
 if( SAYI_MI(chr) )//baslangıc sayiysa
   karakter_yay( chr );
 else //baslangic harfse
   karakter_yogur( chr );

   printf("\n"); //programi terminalden kullananlar icin
 return 0;
}

void karakter_yogur(char c){
 int sayi = 0;
 char eski_c;
 for(eski_c = c ; ( SON_MU(c) ) ; HARF_AL(c) )
 { 
   if( c == eski_c )
     sayi++;
   else
   {
     if( HARF_Mi(eski_c) )  //eger ki eski karakter harfse bas 
         printf("%d%c",sayi,eski_c);
     sayi = 1; //sayiyi sifirla
     if( BOSLUK_MU(c) ) // c bosluk karakteriyse  
     {
       if(c=='\n') printf("\n"); //satır karakteri ise alt satıra gec
       eski_c = EOF;
       continue;
     }
     eski_c = c;
   }
 }
}

void karakter_yay(char c)
{
  int i,kere;
  kere = c;
 do{
     kere=kere-'0'; //kerenin sayi degerini al
     while( SAYI_MI( HARF_AL(c) ) )//eger sayi bir basamaklidan buyukse
     {
       kere= kere*10+(c-'0');//9dan büyük sayılar için
     }
     while( !HARF_Mi(c) && SON_MU(c) ) HARF_AL(c) ;

   if( SON_MU( c ) )
   {
     if( BOSLUK_MU( c ) ) //c bosluk karakteriyse gec
     {
      if( c == '\n' ) printf("\n");
     }
     else
     {
       if( HARF_Mi( c ) )//c harfse bas
          for( i = kere ; i > 0 ; i-- ) printf("%c",c);
     }
   }
   while( !(SAYI_MI( HARF_AL( kere ) )) && SON_MU( kere ) );//sayı alana kadar, girilenleri kere'ye ata
 }while( SON_MU( c ) && SON_MU( kere ) ); 
}