#include <stdio.h>
#include <stdlib.h>
//bir stringdeki sayi harici karakterleri basar
void printUndigit( const char *p ){
	 for( ; *p ; p++)
        if ( !(isdigit(*p)) )
	      putchar(*p);
}
int main(int argc, char *argv[])
{
  char string[] = "hello12canim";
    undigit( string ); 
  return 0;
}
