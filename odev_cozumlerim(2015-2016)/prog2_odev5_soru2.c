#include <stdio.h>
#include <string.h> /*memset için*/
#include <math.h>   /*pow için*/

int main()
{
  char dizi[11];//max 10 basamaklı
  char c;
  unsigned int toplam,sayi,i;
  unsigned long int uzunluk;   
  for(;(c = getchar()) != EOF;uzunluk=0)
  {
        i=0, toplam=0;
        memset(dizi, EOF, sizeof dizi);
        while((c != '\n') && (c != EOF))
        {              
            if( (47<c) && (c<58) )
            { 
              dizi[i]=c;
              i++;
            }  	
	    c = getchar();
	}
           uzunluk = i;
           sayi=atoi(dizi);	
           for(i=0; i<uzunluk ;i++)
           {
             printf("%c^%.0ld+",dizi[i],uzunluk);
           	 toplam += pow((dizi[i]-'0'),uzunluk);
		   }
          if(uzunluk!=0)
          {
           if( sayi == toplam)
              printf("\b=%d armstrong sayidir.\n",sayi);	
           else
              printf("\b=%d armstrong sayi değil.\n",sayi);
          }  
	}
  return 0;
}