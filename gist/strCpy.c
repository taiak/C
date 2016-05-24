#include <stdio.h>

void strCpy(char * , char * );

int main()
{
   char kaynak[]="simiiiiiidiaaaaa";
   char kopya[0];
   strCpy(kopya , kaynak);
   puts( kopya );
   return 0;
}

void strCpy(char * hedef, char * kaynak)
{
   for ( ; (*hedef = *kaynak) != '\0' ; kaynak++ , hedef++ );
}
