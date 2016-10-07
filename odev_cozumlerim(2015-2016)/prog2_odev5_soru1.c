#include <stdio.h>
#include <stdlib.h>
int main()
{
  char dizi[30],dizi2[30];
  printf("ilk kelimeyi giriniz :\n");
    scanf("%s",&dizi);
  printf("ikinci kelimeyi giriniz :\n");
    scanf("%s",&dizi2);
  printf("%s ve %s ",dizi,dizi2);
  if(strlen(dizi)==strlen(dizi2)){	
    if(anagram_kontrol(strlen(dizi),dizi,dizi2)) printf("anagramdir.\n");
    else printf("anagram degildir.\n");
  }
  else printf("anagram degildir.\n");
  return(0);   
}

int anagram_kontrol(int sinir,char kelime1[sinir], char kelime2[sinir])
{
  int i,j,c;
  for( i=0 ; (i<sinir)  ; i++ )
  {
  	c=0;
    for(j=0; (j<sinir); j++){
       if(kelime1[i]==kelime2[j]){
          c=1;
          kelime2[j]=EOF;
          break;
        }
     }
    if(c==0) break;
  } 
  if(c==0) return(0);
  else return(1);
}