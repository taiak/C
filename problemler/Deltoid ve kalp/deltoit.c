#include <stdio.h>
//kristal þekli
int main( )
{ 
	deltoid();
	return 0;
}
void deltoid(void){
	char i,j,bosluk; //bellekte daha az yer kaplamak için
	for( i=0 ; i<15 ; i++ )
	{
		if(i==7)//baþ boþluk
    		bosluk=0;
		else if(i<7 || i == 14)
    		bosluk=7-(i%7);
    	else
    		bosluk=i%7;
      
		for( j=0 ; j<bosluk ; j++ )//bosluk bas
			putchar(' ');
	  
		putchar('*'); 
    
		bosluk=2*(7-bosluk)-1; //son bosluk
		for( j=0 ; j<bosluk ; j++ )//bosluk bas
			putchar(' ');
	
    	if(i%14)
    		putchar('*');
		printf("\n");    
  }
  return 0;
}
