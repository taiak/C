#include <stdio.h>
//olasi strlen fonksiyonu
int strLen(const char *);
int main()
{
    char dizi[] = "yasir";
    char *p = dizi;
    printf("Verilen dizi %d elemanlidir...", strLen(p) );

    return 0;
}
int strLen(const char *pStr ) {
    int i;
    for( i = 0 ; ( * pStr ) != '\0' ; i++)
        pStr++;
    return i;
}
.
