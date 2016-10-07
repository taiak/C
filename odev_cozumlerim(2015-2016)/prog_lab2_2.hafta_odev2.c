#include <stdio.h>
//Klavyeden girilen en buyuk sayiyi 
//bulan program
/* hatalar: */
/* -- baslangicta girilen 0 degeri icin hatalı davraniyor */ 
int main() {
   int a, alt, ust;
   float sayi;
   
   while( a != EOF ) {
     printf("\nBir sayi giriniz ");
     scanf("%f",&sayi);
     
     if ( ! sayi ) break;     //sayi sifirsa döngüden cik  
     if (sayi<alt) alt = sayi;
     if (ust<sayi) ust = sayi;
   
   }

   printf("En kucuk sayi %d, en buyuk sayi %d.\n",alt,ust);
  return 0;
}
   
