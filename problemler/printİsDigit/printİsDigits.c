#include <stdio.h>
// Verilen stringdeki sayilari ekrana basar
//stringi degistirmez
void printIsDigits(const char *p){ 
    for( ; (*p)!= '\0' ; p++) // p EOF olana kadar don
	    if ('0'<=(*p) && (*p)<='9')// p ascii tablosunda 0 ile 9 arasindaysa
	        putchar(*p);
}
int main(int argc, char *argv[])
{  
  char mystring[] = "hell12013";
  printIsDigits( mystring ); 
  return 0;
}
