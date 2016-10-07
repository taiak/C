#include <stdio.h>
/*****************************************************/
/*          butun karakterleri buyuk yazan program   */
/*                   harf_buyult.c                   */
/*                                                   */               
/*   Not: turkce karakterler sorun cikarabildiginden */
/*   dolayi sadece ingilizce karakterler alinmistir  */
/*****************************************************/

int main( int argc, char *argv[] )
{
	char kucuk[28]="abcdefghijklmnoprstuqxvywz";
	char buyuk[28]="ABCDEFGHIJKLMNOPRSTUQXVYWZ";
	int i,j,k;
        char c;
        for( k=1 ; argv[k]!='\0'; k++ ){        
                for( i = 0; argv[k][i]!='\0'; i++ ) {
			for( j=0 ; j<28 ;j++) {
		    	  if (argv[k][i]==kucuk[j]) {
				c = buyuk[j];
  				putchar( c );	
				break;
				}
		    	  else if ( j==27 ){  //Buyuk karakterlerin ayni kalmasi icin
                                c = argv[k][i];
  				putchar(c);}
                        }		  
 		}  	
	  printf(" ");
         }   
         printf("\n");
		
	 return 0;
}

