#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[] ){
    int n1,n2,n3;
    n1 = atoi( argv[1] );
    n2 = atoi( argv[2] );
    n3 = n1 + n2;
    printf("Toplam: %d/n", n3 );
    getchar();
     
   return 0;
  }