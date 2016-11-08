#include <stdio.h>
// tek asal cift sayi 2 oldugu icin 2 ser arttirabiliriz.
// bu, programı yaklasik %50 daha hızlı calistirir
int isprime(int sayi){
	int i;
	for(i = 2 ; i <= sayi/2 ; i = i+2)
        if(sayi%i == 0)// asallik sarti
            return 1;
  return 0;
}
// asalsa 0 degilse 1 doner
