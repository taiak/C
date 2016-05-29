#include <stdio.h>
#include <locale.h>
<<<<<<< HEAD
//sesliharfleri '*' a çevirir
void vowel_to_star(char *);

int main(int argc, char *argv[])
{
  char mystring[] = "Cevat Þakir KABAAÐAÇ";
      vowel_to_star( mystring );
      puts( mystring );
=======
//sesliharfleri '*' a Ã§evirir
void vowel_to_star(const char *);

int main(int argc, char *argv[])
{
  setlocale(LC_ALL,"Turkish"); //klavye dilini tÃ¼rkÃ§eye ayarlama
  char mystring[] = "Taha Yasir Kiroglu";
      vowel_to_star(mystring);
      puts(mystring);
>>>>>>> origin/master
  return 0;
}

void vowel_to_star( char *chr )
{
	setlocale(LC_ALL,"Turkish");//klavye dili türkçe olsun
     for( ; *chr ; chr++ ) 
     {
       switch( *chr )
       { 
         case 'a': case 'A':
         case 'e': case 'E':
         case 'Ä±': case 'I':
         case 'i': case 'Ä°':
         case 'o': case 'O':
         case 'Ã¶': case 'Ã–':
         case 'u': case 'U':
<<<<<<< HEAD
         case 'ü': case 'Ü':
             *chr = '*';//sesli bir harfse * yap
=======
         case 'Ã¼': case 'Ãœ':
             *chr='*';
             break;
>>>>>>> origin/master
        }
     }
}
