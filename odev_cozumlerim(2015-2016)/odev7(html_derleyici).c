#include <stdio.h>
#include <ctype.h>
/**************************************/
/*        html_derleyici.c            */
/* NOT:\n karakterini de bastıgı icin */
/*  program hatalı gozukebilir.       */
/*  Fakat kasıtlı olarak yapılmıştır  */ 
/**************************************/

static FILE *cikti; //dosyanın her iki fonksiyon tarafından okunabilmesi için
int main(int argc, char* argv[])
{
    cikti = fopen("cikti.txt","w+"); //dosyayı okut
    char kaynak_donustur( char, char, int );
    char c, kaynak=1, kaynak_2; //while şartından dolayı "kaynak != EOF" olmalıdır
    c = getchar();
    while( (c != EOF) && (kaynak != EOF) )
    {
      if( c == '#' ) //#gördükçe yorumlaması için
      {
        kaynak = getchar();
        if( kaynak != EOF )// #'dan sonra eof varsa hata vermesin diye
        {
          kaynak_2 = kaynak_donustur( kaynak, 0 , 1 );
          for( c = getchar() ; (c != '#') && (c != EOF) ; c = getchar() )
               fprintf(cikti,"%c",c);

          kaynak_2 = kaynak_donustur(kaynak, kaynak_2, 0);
        }
      }
      else
         c = getchar();
    }
    fclose(cikti);
    return 0;
}
char  kaynak_donustur(char c, char h_icin, int a)
{
  char sayac = 1;
  if( a == 1 )
    fprintf( cikti, "<" ); //metin baslangıcında ortak olan
  else
  {
    if( (c != 'y')) //y istisnadır
      fprintf( cikti, "</" );//metin sonu için ortak olan
  }
  switch(c) //farklı kısımlar burda basılacaktır
  {
  case 'c':
    fprintf( cikti , "center" );
    break;
  case 'k':
    fprintf( cikti , "small" );
    break;
  case 'y':
    if( a == 1 )//y istisna oldugundan ayrı basılır
    {
       fprintf( cikti , "!--" );
       sayac = 0; //y'nin sonunda '>' olmadığı için
     }
    else
       fprintf( cikti , "--" );
    break;
  case 'h':
      if( h_icin == 0 )
         h_icin = getchar();
      if( isdigit(h_icin) && ( 4 > (h_icin-'0') ) && (h_icin-'0') )
          fprintf(cikti,"%c%c", c, h_icin); //h_icin, sayıysa ve 4 ile 3 arasındaysa bas
      break;
  case 'b':
  case 'p':
      fprintf(cikti,"%c",c);
      break;
  }
  if(sayac)//y harfi için basılmayacağı için sayaç vardır
    fprintf( cikti , ">" );
  if( h_icin )
    return h_icin;
  else
    return 0;
}