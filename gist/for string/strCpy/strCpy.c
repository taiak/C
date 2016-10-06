#include <stdio.h> // prntf icin

void strCpy(char * hedef,const char * kaynak)
{
   for ( ; (*hedef = *kaynak) != '\0' ; kaynak++ , hedef++ );
}
int main()
{
   char kaynak[]="simiiiiiidiaaaaa";
   char kopya[0];
   strCpy(kopya , kaynak);
   printf( kopya );
   return 0;
}


