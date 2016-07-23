#include <stdio.h>

int main(){
	kareYap(12,5);
}

int kareYap( unsigned int n ){
	if( n > 1 ){
    	unsigned int i,j;
		for( i=0; i < n ; i++ ){
			printf("* ");
			for( j=0 ; j < n-2 ; j++ ) {
				if( i%(n-1) )
				    printf("  ");
				else
				    printf("* ");
			}
			if( n>0 )
			   putchar('*');
			printf("\n");
		}
    }
    else if (n == 1 )
      putchar('*');
    else //1 'den küçük sayılar için
      return 1;
      
	  return 0;
}
