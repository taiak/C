#include <stdio.h>
//kalp þekli çýkaran c programý
void bas(int sayi)
{
	int j;
	for( j=0 ; j<sayi ; j++ )//bosluk bas
		putchar(' ');
	putchar('*');//döngüden sonra * koy
}
int kalp_bas(void){
	int i,bosluk;
	for( i=3 ; i<15 ; i++ )//normalde deltoid olduðu için
 	{
   		if( (i<7) || (i==14) )//baþ boþluk için
   	 		bosluk = 7-(i%7);
   	 	else
   	    	bosluk = i%7;
	 	bas(bosluk); //bosluk bas
	 	bosluk = 2*(7-bosluk)-1; //son bosluk için
    	if((i>6) || (i==3)){//ara bosluklar için
    	
	         if(i!=14)
   	         bas(bosluk);
   	    }
   	 	else{
  	 		bas(2*i-7);//ilk ara bosluk
   	    	if(i!=6)//i=6'yý hariç tut
   	    		bas((2*i-1)%4);//orta ara bosluk 
   	 		bas(2*i-7);//son ara bosluk
 	 	}
   	 	printf("\n");//alt satýra geç
 	}
}
int main( ){ 
	kalp_bas();
	return 0;
}

