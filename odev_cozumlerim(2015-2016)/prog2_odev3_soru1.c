#include <stdio.h>
#include <stdlib.h>

/******************************/
/* ---sifreleme_cozumleme.c---*/
/*    Konsoldan girilen       */
/*    1 degeri sifreletir     */
/*    0 degeri cozumletir     */
/******************************/

//sifre = konsoldan girilen sayi degeri

int  main(int argc, char *argv[]){
    FILE *cikti; 
    cikti = fopen("cikti.txt","w+"); //cikti.txt'i ac veya olustur
    int  sifre, c;
    sifre = atoi( argv[1] ); //konsoldan girileni sayi olarak oku ve ata 
    c = getchar();
    if( (sifre == 1) || (sifre == 0) ) {
      while ( c != EOF ) {    //dosyalar bitene kadar devam et

          if( sifre==1 ) c = sifrele(c);   
          else if( sifre==0 ) c = sifrecoz(c);

          fprintf(cikti,"%c",c); //dosyaya harfi yazdirma
          c = getchar();
       }
       printf("Dosya basarili sekilde ");
       if(sifre == 1) printf("sifrelendi.\n");
       else printf("cozumlendi.\n");
    }
    else 
    printf("Girilen sayinin degeri bulunamadi!!!\n");
    fclose(cikti); //cikti.txt'i kapama
   return 0;   
}

int sifrele(int harf)  //sifreleme fonksiyonu
{
    harf=(((harf-65))%62-2)+65;
    return harf;   
}

int sifrecoz(int harf)  //sifreyi cozme fonksiyonu
{
    harf=(((harf-65))%62+2)+65;
    return harf;
}