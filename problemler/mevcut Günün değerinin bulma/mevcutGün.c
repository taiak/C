#include <stdio.h>
#include <time.h>
//yýlýn kacýncý gunu oldugunu yazar
struct tm *tarih_zaman;
time_t zaman_ayar;

int main (int argc,char* argv[])
{	
   char dizi[40];
   time( &zaman_ayar ); 
   tarih_zaman = localtime( &zaman_ayar );
   strftime(dizi ,40,"\nbu yilin gecen gun sayisi: %j ", tarih_zaman);
   printf("%s\n\n",dizi);
   return(0);
}
