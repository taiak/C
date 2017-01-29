#include <stdio.h>
#include <math.h>
/* 
içerisindeki pow ve floor fonksiyonlarının math.h kütüphanesindeki referans sorunundan dolayı 
gcc de derlerken -lm parametresiyle derlenmesi gerekir
*/
double blend_pay (p, n, r, c, f) // blended payment
	double p, n, r, c, f;
{
	double B, i;
	// i= ((r/c + 1)^(c/f)) -1;
	i = pow( (r/c + 1), c/f) -1;
	//B = (P *i ) / (1 - (i + 1))^-n;
	B = (p * i) / (1 - pow((i+1), -n) );
	return B;
}
// toplam ödenecek faizi de içinde barındıran para
double interest (double B, double n)
{
		return B*n;
}
// bankadan alınacak para
double total_inter (double interest, double req)
{	
	return interest - req;
}

// interest / principal oranı
double i_p_ratio (double interest, double p)
{
	return interest/p;
}

// interest period #-> faiz aralığı
double inter_per (double interest, double per)
{
	return interest/per;
}

void print_to_screen(double p, double B, double n)
{
	double total_interest = interest(B, n);
	double total = total_inter(total_interest, p);

	printf("\n-----------------------------------------------------\n\n");

	printf("--> Your blended payment(ie. principal + interest) is $%.2lf\n\n", B);
		
	printf("--> Your total pay (interest + principal) is $%.2lf x %.0lf = $%.2lf\n\n",
		 B, n, total_interest);
	
	printf("--> Your total interest paid is $%.2lf - $%.2lf = $%.2lf\n\n",
			total_interest, p, total);

	printf("--> The interest/principal ratio is $%.2lf / $%.2lf = %0.4lf\n\n",
			total, p, i_p_ratio(total, p));

	printf("--> The average interest paid per year is $%.2lf / %.0lf years = $%.2lf\n\n",
			total	, n/12, inter_per (total, n/12 ));

	printf("--> The average interest paid per month is $%.2lf / %.0lf months = $%.2lf\n\n",
			total , n, inter_per (total, n));

	printf("--> The amortization expressed in years is %.0lf years.\n\n", n/12 );

	printf("-----------------------------------------------------\n\n");

}
// tanımlamalar burada yaptırılacak
void mortgage_calculator()
{
	double r, B, n, c, f, p, pr ,ac;
	printf("Price of house: $");//toplam gereken para bilgisi al
		scanf("%lf", &pr);
	printf("\nYour accumulation: $");//birikimi al
		scanf("%lf", &ac);
	// para ihtiyacını belirle
	p = pr - ac;

	// r = annual interest rate
	// r = 0.045; // its given interest rate in canada
	printf("\nInterest rate: %%");
		scanf("%lf", &r);
	r = r/100;
	// n = total number of payments = 5 years * 12 months/year = 60 payments
	//n = 60; //given parameterin example
	printf("\nPayment time (year): "); // ödeme süresi
		scanf("%lf", &n);
	n = n * 12; //ay bazındaki halini hesaplıyoruz
	// c = compounding frequency per year = semi-annually = 2 per year
	//c = 2; //sorudaki örnekte verilen
	printf("\nCompounding frequency per year (2 for semi-annually): "); // yıl başına ödeme süresi
		scanf("%lf", &c);
	// f  = frequency of payments per year = monthly = 12 per year
	//f = 12; //sorudaki örnekte aylık olarak vermiş yani 12
	printf("\nFrequency of payments per year (12 for monthly): "); // yıl içinde ödeme sıklığı
		scanf("%lf", &f);
	
	B = blend_pay(p, n, r, c, f);

	print_to_screen(p, B, n);
}

int main()
{
	mortgage_calculator();
	return 0;
}
