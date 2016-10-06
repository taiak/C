#include <stdio.h>
#include <locale.h> //setlocale dil ayarlamak icin

//turkce icin sesliharfleri '*' a cevirir
void strVowel2Star( char *chr ){
     for( ; *chr ; chr++ ) {
       switch( *chr ){
         case 'a': case 'A':
         case 'e': case 'E':
         case 'ý': case 'I':
         case 'i': case 'Ý':
         case 'o': case 'O':
         case 'ö': case 'Ö':
         case 'u': case 'U':
         case 'ü': case 'Ü':
             *chr = '*'; //sesli bir harfse * yap
             break;
        }
     }
}
int main( int argc, char *argv[] ){
	setlocale( LC_ALL,"Turkish" ); //klavye dilini turkceye ayarla
	char mystring[] = "Taha Yasir Kýroðlu";
	  strVowel2Star( mystring );
	  puts( mystring );
	return 0;
}
