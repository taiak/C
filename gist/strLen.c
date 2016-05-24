#include <stdio.h>
//olasý strlen fonksiyonu
int strLen(const char *);
int main()
{
    char dizi[] = "yasir";
    char *p = dizi;
    printf("Verilen dizi %d elemanlidir...", strLen(p) );

    return 0;
}
int strLen(const char *p ) {
    int i;
    for(i=0; (*p) != 0 ;i++)
        p++;
    return i;
}
