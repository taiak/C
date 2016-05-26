#include "stdio.h"

void strCat(char *hedef ,char *kaynak)
{
    for (  ; (*hedef) != '\0'; hedef++);//p eofu bulana kadar donsun

	  for( ; (* hedef = * kaynak) != '\0' ; kaynak++, hedef++);//kaynak'gin degerini pH'e ata
}
int main(void)
{
    char hedef[]={"19Mayis"}, kaynak[]={"Univertesi"};
    strCat(hedef,kaynak);
    printf("%s",hedef);

	return 0;
}
