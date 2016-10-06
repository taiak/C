#include <stdio.h>
int strLen(const char *); //string kutuphanesini dahil etmemek icin
int strEqual(const char* ,const char *,int ,int);
/********************************************************************/
/*  strEqual() iki dizgileri karsilastirir. Eger esitlerse 0 doner  */
/*  eger birinci dizgi uzunsa -1, ikinci dizgi uzunsa -2 doner      */
/*  dizgiler ayni uzunluktaysa, farkli olduklarý harf sayisini doner*/
/********************************************************************/

int strEqual( const char* str1,const char *str2,int len1,int len2 ){
    int i = 0;
	if(len1 == len2){
	    while( (*(str1++)) == (*(str2++)) )
		    i++;
	    if( i == (*str1))
	       return 0;
	    else
	       return i;
	}
	else if(len1>len2)
	    return -1;
	else if(len2>len1)
	    return -2;
}
int strLen(const char *pStr ) {
    int i;
    for( i = 0 ; ( * pStr ) != '\0' ; i++)
        pStr++;
    return i;
}
int main(){
	int i;
	char bir[20]="nabercaným";
	char iki[20]="nabercýným";
	i=strEqual(bir, iki, strLen(bir) ,strLen(iki));
	printf("%d",i);
	getchar();
}
