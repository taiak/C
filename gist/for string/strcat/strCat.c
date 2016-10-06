#include <stdio.h>
#include <string.h>//strlen icin
/*******************************************************/
/*  strcat fonksiyonu kaynak stringi hedefin arkasına  */
/*                    kopyalar                         */
/*     NOT: Dizinin uzunlugu biliniyorsa strCat_v2     */
/*             Daha optimize calisir                   */
/*******************************************************/ 

void strCat(char *hedef ,const char *kaynak)
{
    for (  ; (*hedef) != '\0'; hedef++);//Eof u bulana kadar donsun

	for( ; (* hedef = * kaynak) != '\0' ; kaynak++, hedef++);
	/*kaynagin degerini hedefe ekle*/
}
void strCat_v2(char *hedef ,const char *kaynak, const int lenHedef)
{
	hedef += lenHedef;
	for( ; (* hedef = * kaynak) != '\0' ; kaynak++, hedef++);
	/*kaynagin degerini hedefe ekle*/
}

int main(void)
{
    char hedef[]={"TahaYasir"}, kaynak[]={"Kiroglu"};

    strCat_v2(hedef,kaynak,strlen(hedef));
    printf("%s",hedef);
	return 0;
}
