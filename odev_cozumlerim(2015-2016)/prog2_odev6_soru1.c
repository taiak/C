#include <stdio.h>
#include <string.h>
#define UZUNLUK strlen(yasakli)  
#define SON_degil(c) (c != EOF) 
#define BOSLUK_degil(c) !isspace(c)
#define AL(c) c=getchar()

int main(int argc,char *argv[])
{
  int i , gosterge = 0 ;
  char yasakli[20], c ;//yasakli kelimenin max uzunluğu 20
  if( argc-1 > 0)
    strcpy(yasakli, argv[1]); 
  else 
  {
    printf("HATA: Yasakli kelime tesbit edilemedi!\n");
    printf("HATA NEDENİ: Parametre eksik girildi!\n");
    return 1;
  }
  char kelime[UZUNLUK]; //kelimenin uzunluğu dizinin uzunluğu kadar olsun 
  while( SON_degil(c) )
  {
   AL(c);
     for( i=0 ; ( i<UZUNLUK ) && SON_degil(c) && BOSLUK_degil(c) ; i++ ) 
     {  
       if( yasakli[i] != c )
       {
         gosterge = 0;
         break;
       }
       else
         gosterge = 1;
      AL(c);
     }
     if( i==UZUNLUK && gosterge == 1 )
     {
       printf("Yasaklı içerik!!!\n");
       return 1;
     }
     while( SON_degil(c) && BOSLUK_degil(c) ) AL(c);
  }
  printf("Yasaklı içerik yok.\n");
 return 0;
}