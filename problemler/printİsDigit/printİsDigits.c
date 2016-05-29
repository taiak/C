#include <stdio.h>
#include <ctype.h>
// verilen stringdeki sayilari ekrana bassar
void printIsDigits(const char *p){ 
	 for( ; *p ; p++)
	    if (isdigit(*p))
	      putchar(*p);
}
int main(int argc, char *argv[])
{  
  char mystring[] = "hell1213";
  printIsDigits( mystring ); 
  return 0;
}
