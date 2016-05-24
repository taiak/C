#include "stdio.h"

void strCat(const char *hedef ,char *kaynak)
{
	char * pH  ;
    for ( pH = hedef ; (*pH) != '\0'; pH++);//p eofu bulana kadar dönsün

	for( ; (* pH = * kaynak) != '\0' ; kaynak++, pH++);//kaynak'ın değerini pH'e ata
	//eğer ph eof a eşit değilse ph ve kaynak adreslerinibir arttır    
}
int main(void)
{
    char hedef[]={"19Mayis"}, kaynak[]={"Univertesi"};
    strCat(hedef,kaynak);
    printf("%s",hedef);
    
	return 0;
}
