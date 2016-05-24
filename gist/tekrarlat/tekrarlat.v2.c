#include <stdio.h>
//verilen stringi son karakterine kadar çevirerek basar
//v2 pointer'ın suyu çıkarılmış hali
void tekrarlat(const char*);
int main(){
    char yasir[] = "This is a fallOO midterm question. ";
    tekrarlat( yasir );   
    return 0;
}
void tekrarlat(const char* str) {
	char * p, *pj;
   for(p= str ; *p != '\0' ; p++)
   {
     for(pj = p ; *pj != '\0' ; pj++ )
   	     putchar(*pj);//kelimeyi ilk harfinden geçerli harfe kadar bas
     for(pj = str ; pj != p ; pj++ )
   	     putchar( *pj );//kelimenin son kısmından sonrayı bas
     putchar('\n');//alt satıra geç
   }
}
