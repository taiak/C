#include <stdio.h>
#include <math.h>/*sqrt icin*/
int isprime(int sayi){
	int i, asal;
	asal = (sayi%2)?0:1;
	asal = (sayi == 2)?1:0;
	for(i = 3 ; i <= sqrt((double)sayi) && asal ; i = i+2)
        	if(sayi%i == 0)// asallik sarti
			asal = 0;
	return asal;
}
int main(){
	if(isprime(58))
		printf("asal\n");
	else
		printf("asal degil\n");
	return 0;
}
