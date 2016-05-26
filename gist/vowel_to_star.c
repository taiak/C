#include <stdio.h>
#include <locale.h>
//sesliharfleri '*' a çevirir
void vowel_to_star(const char *);

int main(int argc, char *argv[])
{
  char mystring[] = "Cevat Þakir KABAAÐAÇ";
      vowel_to_star(mystring);
      puts(mystring);
  return 0;
}

void vowel_to_star(const char *pChr)
{
	setlocale(LC_ALL,"Turkish");//klavye dili türkçe olsun
	char *chr=pChr;
     for( ; *chr ; chr++ ) 
     {
       switch( *chr )
       { 
         case 'a': case 'A':
         case 'e': case 'E':
         case 'ý': case 'I':
         case 'i': case 'Ý':
         case 'o': case 'O':
         case 'ö': case 'Ö':
         case 'u': case 'U':
         case 'ü': case 'Ü':
             *chr='*';
        }
     }
}
