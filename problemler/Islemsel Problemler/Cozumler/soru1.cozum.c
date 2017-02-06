#include <stdio.h>
#include <math.h>
// 1^2+2^2+...+n^2
long int karelerinToplami(int n)
{
	return (n * (n +1) * (2*n + 1) ) / 6 ;
};
// (1+2+...+n)^n
long int toplamlarinKaresi(int n)
{
	return pow ( (n*n + n) / 2, 2);
}
long int hesapla(int n)
{
	return toplamlarinKaresi(n)- karelerinToplami(n);
}
int main(int argc, char * argv[])
{
	int n;
	printf ("Bir Sayı Giriniz: ");
	scanf ("%d", &n);
	printf ("%lu\n", hesapla(n));
	return 0;
}

