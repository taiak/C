#include <stdio.h>
#include <string.h>
//verilen stringi son karakterine kadar çevirerek basar
void tekrarlat(const char*);
int main(){
    char yasir[] = "This is a fallOO midterm question. ";
    tekrarlat( yasir );   
    return 0;
}
void tekrarlat(const char* str) {
   int boy=strlen( str )-1;
   int i;
   for(i=0 ; boy > i ; i++)
   {
   	 int j;
   	 for(j = i ; j < boy ; j++ )
   	    putchar(*(str+j));	
     for(j = 0 ; j < i ; j++ )
   	    putchar(*(str+j));	
   	 putchar('\n');
   }
}
