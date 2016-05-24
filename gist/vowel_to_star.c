#include <stdio.h>
#include <locale.h>
//sesliharfleri '*' a çevirir
void vowel_to_star(const char *);

int main(int argc, char *argv[])
{
  setlocale(LC_ALL,"Turkish"); //klavye dilini türkçeye ayarlama
  char mystring[] = "Taha Yasir Kýroðlu";
      vowel_to_star(mystring);
      puts(mystring);
  return 0;
}

void vowel_to_star(const char *pChr)
{
	char *chr=pChr;
     for( ; *chr ; chr++ ) 
     {
       switch( *chr )
       { 
         case 'a': case 'A':
         case 'e': case 'E':
         case 'ı': case 'I':
         case 'i': case 'İ':
         case 'o': case 'O':
         case 'ö': case 'Ö':
         case 'u': case 'U':
         case 'ü': case 'Ü':
             *chr='*';
             break;
        }
     }
}
