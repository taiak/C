#include <stdio.h>
#include <stdlib.h>
// bir stringdeki sayi harici karakterleri basar.
// string uzerinde bir degisiklik yapmaz
void printUndigits( const char *p ){
	 for( ; *p ; p++)
        if ( !(isdigit(*p)) )
	      putchar(*p);
}
int main(int argc, char *argv[])
{
  char string[] = "bize12teklavas";
    printUndigits( string ); 
  return 0;
}
