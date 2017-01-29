#include <stdio.h>
#include <math.h> /* for pow */
 
 #define YEAR 12

// gnu c compiler ile derlenirken -lm parametresi kullanılmalıdır!
// başka derleyicilerde

float get_blend (float principal, float interest, int pay_time) // blended payment
{
	float blend;
	// B = (P *i ) / (1 - (i + 1))^-n;
	blend = (principal * interest) / (1 - pow ((interest + 1), -pay_time) );
	return blend;
}

float interest_ratio (float inter_rate, float comp_per_year, float pay_per_year) //faizi bulur
{
	float interest;
	// i= ((r/c + 1)^(c/f)) -1 --> formule
	// r is inter_rate, c is comp_per_year, f is pay_per_year
	interest = pow ( (inter_rate / comp_per_year + 1), comp_per_year / pay_per_year) -1;
	
	return interest;
}
float get_principal () // ihtiyac olan parayı hesaplar
{
	float saving, principal;

	printf ("House price: $"); //toplam gereken para bilgisi al
		scanf ("%f", &principal);

	printf ("\nYour saving: $"); // birikiminiz
		scanf ("%f", &saving);

	principal = principal - saving;

	return principal;
}
float get_interest () //faiz oranını klavyeden alarak hesaplar
{
	float inter_rate, comp_per_year, pay_per_year, interest;

	printf ("\nInterest rate of bank: %%");
		scanf ("%f", &inter_rate);
	inter_rate /= 100;
	
	printf ("\n~~~ For compounding (2 for semi-annually) ~~~"); // comment for user
	printf ("\nCompounding frequency (per year): "); // yıl başına düşen ödeme süresi
		scanf ("%f", &comp_per_year);

	printf ("\n~~~ For payment (12 for monthly) ~~~"); // comment for user
	printf ("\nFrequency of payments (per year): "); // yıl içinde ödeme sıklığı
		scanf ("%f", &pay_per_year);

	interest = interest_ratio (inter_rate, comp_per_year, pay_per_year);
	
	return interest;
}
int get_payTime ()
{
	int pay_time;

	printf ("\nPayment time (year): "); // ödeme süresi
		scanf ("%d", &pay_time);

	pay_time *= 12; // ay bazındaki halini hesaplıyoruz

	return pay_time;
}
// toplam ödenecek para
float total_payment (float blend, int pay_time)
{
	return blend * pay_time;
}
// bankadan alınacak para
float total_inter (float interest, float req)
{	
	return interest - req;
}
// interest / principal oranı
float inter_princip_rat (float interest, float principal)
{
	return interest / principal;
}
// interest period #-> faiz aralığı
float inter_per (float interest, float per)
{
	return interest / per;
}
// Para değerlerini kurusuyla yazdırmak için %.2f kullanılmalı!
void show_mortgage_result (float principal, float blend, int pay_time)
{
	float total_pay, inter_pay;

		total_pay = total_payment (blend, pay_time); // toplam ödenecek para(faiz dahil)

		inter_pay = total_inter (total_pay ,principal); // ana para hariç ödenecek(faiz)

	printf ("\n**********************************************************************\n\n");

	printf ("-> Your blended payment is $%.2f\n\n", blend);
		
	printf ("-> Your total pay (interest + principal) is $%.2f x %d = $%.2f\n\n",
		 blend, pay_time, total_pay);
	
	printf ("-> Your total interest paid is $%.2f - $%.2f = $%.2f\n\n",
			total_pay, principal, inter_pay);

	printf ("-> The interest/principal ratio is $%.2f / $%.2f = %0.4f\n\n",
			inter_pay, principal, inter_princip_rat (inter_pay, principal));

	printf ("-> The average interest paid per year is $%.2f / %d years = $%.2f\n\n",
			inter_pay, pay_time / YEAR, inter_per (inter_pay, pay_time / YEAR ));

	printf ("-> The average interest paid per month is $%.2f / %d months = $%.2f\n\n",
			inter_pay, pay_time, inter_per (inter_pay, pay_time));

	printf ("-> The amortization expressed in years is %d years.\n\n", pay_time/YEAR );

	printf ("**********************************************************************\n");
}
void start_screen() 
{
	printf("### MORTGAGE CALCULATOR v1 ###\n\n");
}
float calculate_mortgage ()
{
	start_screen();
	float principal, blend, interest;

	int pay_time;

	principal = get_principal (); // birincil parayı al

	pay_time = get_payTime (); // ödemeleri al 

	interest = get_interest (); // faiz oranını al

	blend = get_blend (principal, interest, pay_time); // blendi hesapla

	show_mortgage_result (principal, blend, pay_time); //print the results
}

int main ()
{
	calculate_mortgage (); // hesaplayıp ekrana basar

	return 0;
}
