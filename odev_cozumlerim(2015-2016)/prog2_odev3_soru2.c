#include <stdio.h>   

int main() 
  {
    int c,i,toplam=0, sayac=0,belirtec;
    char kelime[20];
    c=getchar();
    while( c != EOF )
     {
       belirtec=1;
       for( i=0 ; (c != ' ') ; i++) 
        {
          kelime[i]=c;
          c=getchar();
          sayac=i;
       }
      if(sayac > 1){ // 2 karakterden asagısını almamak icin
         for(i=0; (i<sayac) && belirtec ; i++, sayac--) 
                  if (kelime[basla] != kelime[sayac]) belirtec = 0;
        if(belirtec==1)
         {
          for(i=0; kelime[i] != EOF; i++ ) printf("%c",kelime[i]);
          printf("\n");
          toplam=toplam+1;
        }
       }
        for(i=0; kelime[i] != EOF; i++ ) kelime[i] = EOF; //diziyi bosaltma    
       c=getchar();  
    }
    return 0;
}
