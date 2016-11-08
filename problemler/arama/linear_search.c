#include <stdio.h>
// dizi üzerinde doğrusal arama yapar
int ls(int *pDizi, int aranan) {
    int i;
    for( i = 0 ; ( * pDizi ) != '\0' ; i++)
    	if( aranan == (*(pDizi++)) )
    		return i;
    return -1;
int main()
{
   int dizi[] = {2, 3, 10, 40, 400};
   int n = sizeof(dizi)/ sizeof(dizi[0]);
   int x = 40;
   int sonuc = ls(dizi, x);
   if (sonuc == -1)
		printf("Aranan eleman bulunamadi.\n");
   else
   		printf("Eleman bulundu. Konum: %d\n", sonuc);
   return 0;
}
