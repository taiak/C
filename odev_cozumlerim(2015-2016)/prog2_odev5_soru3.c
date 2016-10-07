#include <stdio.h>
#include <stdlib.h>
long factorial(int n);
 
int main(int argc,char *argv[])
{
   int i, n, j;
   i=argc-1;
   if(i)
      n=atoi(argv[1]); 
   else {
      printf("Paskal ucgeninin uzunlugunu giriniz...");
      scanf("%d",&n);
   }

   for (i = 0; i < n; i++)
   {
      for (j = 0; j <= (n - i-2); j++) printf("   ");
 
      for (j = 0 ; j <= i; j++)
	   printf("%6ld",factorial(i)/(factorial(j)*factorial(i-j)));
 
      printf("\n");
   }
   return 0;
}

long factorial(int n){
   int k;
   long result = 1;
 
   for (k = 1; k <= n; k++ )
         result *=k;
 
   return result;
}