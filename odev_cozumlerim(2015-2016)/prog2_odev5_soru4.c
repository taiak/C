#include <stdio.h>
/****************************************************************/
/*       Genel bir metinde en cok kullanılanlar sırasıyla:      */
/*     kucuk harfler, bosluk karakteri,buyuk harfler, sayilar   */
/*      ve digerleri oldugu icin sıralama ona göre yapılmıstır. */
/*   Bu optimasyonun amacı programın daha hızlı calısmasıdır    */
/*                                                              */    
/* program zayıflıkları: sadece ingiliz harfleri için çalışıyor */
/****************************************************************/

int main()
{
  int c;
  char sinir;
  unsigned int sayi=0, kucuk_c=0, buyuk_c=0,bosluk=0, diger_c=0;   
   while( ( c ) != EOF )
   {
    if( ( 'a' <= c ) && ( c <= 'z' ) )
     {
         kucuk_c++;
         sinir=1;
     }
    else if(c==' ') bosluk++;
    else if( ( 'A' <= c ) && ( c <= 'Z' ) )
     {  
         buyuk_c++;
         sinir=1;
     }
    else if( ( '0' < c ) && ( c <= '1'))
                              sayi++;
    else if ( c == '\n'){ 
      diger_c++;
      sinir=1;
    }
    else if(c) 
          diger_c++;
  
    if(sinir==1) putchar(c);
        sinir=0 ;//sınır sadece buyuk ve kucuk elemanları almak için
        c=getchar();
    }
    
    printf("\nkucuk karakterler:%d\nbuyuk karakterler:%d\nbosluk:%d\n"
        "sayilar:%d\ndigerleri:%d\n",kucuk_c,buyuk_c,bosluk,sayi,diger_c);   
  return 0;
}