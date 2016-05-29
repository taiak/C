#include <stdio.h>
#include <ctype.h>
#define al(c) c=getchar()
char karakter_kontrol( int * );
int mors_et( void );

int main(int argc, char* argv[])
{
   mors_et(); 
   return 0;   
} 
int mors_et( void )
{
    int c;
    char alfabe[][7] = { "-.-.--", "...-..-", ".-...", ".----."
                    ,"-.--.", "-.--.-", ".-.-.", "--..--" 
                    ,"-....-", ".-.-.-", "-..-.", "-----" 
                    ,".----", "..---", "...--", "....-" 
                    ,".....", "-....", "--...", "---.."
                    ,"----.", "---...", "-.-.-.", "-...-"
                    ,"..--..", ".--.-.", ".-", "-...", "-.-."
                    ,"-..", ".", "..-.", "--.", "....", ".."
                    ,".---", "-.-", ".-..", "--", "-.", "---"
                    ,".--.", "--.-", ".-.", "...", "-", "..-"
                    ,"...-", ".--", "-..-", "-.--", "--.." };
    for(al(c) ; c != EOF ; al(c))
    {
      c = toupper( c );
      c = karakter_kontrol(&c);
      if( c == 'e' ) //eof ise bitir
          break;
      else if( c == 'b' )//boþluk karakteriyse ' / ' bas
          printf(" / ");
      else if( c== 'n' )
          putchar('\n');
      else if( c == 'g' ) //geçersizse deam et
          continue;
      else
          printf("%s ", alfabe[ c ] );
    }
     putchar('\n'); //terminal kullanýcýlarý için
   return 0;
}
//karakterin deðerini kontol eder ve dizideki deðerini döndürür
//eof ise 'e', boþluk ise 'b', geçersiz ise 'g' deðerlerini döndürür. 
char karakter_kontrol( int* chr ){
      char harf;
      if( *chr == '\n' )
          harf = 'n';
      else if( isspace( *chr ))
          harf = 'b';
      else if( *chr == EOF )
          harf = 'e';
      else if(( '>' < *chr ) && ( *chr < '[' ))
          harf = *chr-39;
      else if(( '*' < *chr ) && ( *chr < '<' ))
          harf = *chr-37;
      else
      {
          switch(*chr)//ustteki kurallara uymayanlar
          {
            case '!':  harf = 0;   break;
            case '$':  harf = 1;   break;
            case '&':  harf = 2;   break;
            case '"':  harf = 3;   break;
            case '(':  harf = 4;   break;
            case ')':  harf = 5;   break;
            case '=':  harf = 23;  break;
            default:   harf = 'g'; //Geçerli harflerden deðillerse devam ettir
          }
      }        
   return harf;
}
