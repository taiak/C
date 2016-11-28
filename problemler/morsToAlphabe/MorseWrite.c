#include <stdio.h>
#include <ctype.h>
#define al(c) c=getchar()
//karakterin degerini kontol eder ve dizideki degerini dondurur
//eof ise 'e', bosluk ise 'b', gecersiz ise 'g' degerlerini dondurur. 
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
          switch(*chr)// ustteki kurallara uymayanlar
          {
            case '!':  harf = 0;   break;
            case '$':  harf = 1;   break;
            case '&':  harf = 2;   break;
            case '"':  harf = 3;   break;
            case '(':  harf = 4;   break;
            case ')':  harf = 5;   break;
            case '=':  harf = 23;  break;
            default:   harf = 'g'; //Gecerli harflerden degillerse devam ettir
          }
      }        
   return harf;
}

int mors_et( void )
{
    int c, c_eski;
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
      else if( c == 'b' ){// bosluk karakteriyse ' / ' bas
          if( c_eski != ' ' ) 
              printf(" / ");
      }
      else if( c == 'n' )
          putchar('\n');
      else if( c == 'g' ) //gecersiz karakterse devam et
          continue;
      else
          printf("%s ", alfabe[ c ] );
      c_eski = c;
    }
     putchar('\n'); //terminal kullanıcıları için
   return 0;
}
int main(int argc, char* argv[])
{
   mors_et(); 
   return 0;   
} 
