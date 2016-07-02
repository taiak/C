#include <stdio.h>
#include <stdlib.h>
//bir stringdeki sayi harici karakterleri basar
void printUndigits( const char *p ){
	 for( ; *p ; p++)
        if ( !(isdigit(*p)) )
	      putchar(*p);
}
int main(int argc, char *argv[])
{
  char string[] = "hello12canim";
    printUndigits( string ); 
  return 0;
}
