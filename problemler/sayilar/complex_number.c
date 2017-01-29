#include <stdio.h>
#include <stdlib.h>

/* name's trying to choosing uniq. so every complex func start with "cx_" */
/*isimlerin tekil olması içininer kısmı her fonksiyon "cx_" ile başlıyor */

struct complex{ // karmaşık sayıyı tutan complex yapısı
	double RE; //real part    /*reel kısmı*/
	double IM; //imaginary part   /*imaj*/
};
typedef struct complex COMPLEX; //complex yapsısını "COMPLEX" olarak adlandırdık

void cx_print (COMPLEX num){ //imajiner sayıyı ekrana basmaya yarar
	if(num.RE == 0)
		printf("%.2fi\n", num.IM);
	else if(num.IM == 0)
		printf("%0.2f\n", num.RE);
	else	if(num.IM < 0 )
		printf ("%0.2f - %0.2fi\n", num.RE, -num.IM);
	else
		printf ("%0.2f + %0.2fi\n", num.RE, num.IM);
		
}
/* toplama işlemi */
COMPLEX cx_add (COMPLEX num1, COMPLEX num2){ // addition operation
	COMPLEX sum;
	sum.RE = num1.RE + num2.RE;
	sum.IM = num1.IM + num2.IM;
	return sum;
}
/* negatifini alma işlemi */
COMPLEX cx_neg (COMPLEX num){ // negation operation
	num.RE = (- num.RE);
	num.IM = (- num.IM);
	return num;
}
/* çıkarma işlemi */
COMPLEX cx_sub (COMPLEX num1, COMPLEX num2){ // substraction operation
	COMPLEX sub;
	sub.RE = num1.RE - num2.RE;
	sub.IM = num1.IM - num2.IM;
	return sub;
}
/* çarpma işlemi */
COMPLEX cx_mul (COMPLEX num1, COMPLEX num2){ // multiplication operation
	COMPLEX mul;
	mul.RE = num1.RE * num2.RE - (num1.IM * num2.IM);
	mul.IM = num1.IM * num2.RE + num1.RE * num2.IM ;
	return mul;
}
/* normal bir sayıyı, complex bir sayıyla çarpma fonksiyonu */
COMPLEX cx_mul_num (COMPLEX num1, double num2){ // multiplication with normal num
	num1.RE = num1.RE * num2 ;
	num1.IM = num1.IM * num2 ;
	return num1;
}
/* normal bir sayıyla toplama işlemi */
COMPLEX cx_add_num (COMPLEX num1, double num2){ // addition with normal num
	num1.RE = num1.RE + num2 ;
	return num1;
}
/* komplex bir sayıyı normal sayıya böler*/
COMPLEX cx_div_num (COMPLEX num1, double num2){ // division with normal num
	num1.RE = num1.RE / num2 ;
	num1.IM = num1.IM / num2 ;
	return num1;
}
/* karmaşık sayı oluşturmaya sağlar */
COMPLEX make_complex (double re, double im){ //make number to complex
	COMPLEX number = {re, im}; // re is real, im is imaginary
	return number;
}
/* karmaşık sayının eşleniğini alır */
COMPLEX cx_conj (COMPLEX num){ //conjugate of complex number
	num.IM = (- num.IM);
	return num;
}
/* sayıyı eşleniğine böler */
double cx_mul_conj (COMPLEX number){ // multiplicate, with conjuction of with self
	number = cx_mul (number, cx_conj (number));
	return number.RE;
} 
/* karmaşık sayının bölmeye göre tersini hesaplar */
COMPLEX cx_inv (COMPLEX num) { // it's found inverse of func.
	double coef; // coefficient of num 
	coef = cx_mul_conj (num); // calculate down of op.
	num = cx_conj (num); // find num's conjugate
	num = cx_div_num (num, coef); // find (conj / coef)
	return num;
}
/* return real part of num */ 
double cx_real_part (COMPLEX num){
	return num.RE;
}
/* return imaginary part of num */
double cx_imag_part (COMPLEX num){
	return num.IM;
}
/* bölme işlemi */
COMPLEX cx_div (COMPLEX num1, COMPLEX num2){ // division operation
	COMPLEX div;
	double coef;// coefficient 
	coef = cx_mul_conj (num2); // calculate down of op.
	div = cx_mul (num1, cx_conj (num2)); //calculate up of op.
	div = cx_div_num(div, coef); // up op. * ( 1 / coef )
	return div;
}
int main(){
	COMPLEX c1 = make_complex (10, 2);
	COMPLEX c2 = make_complex (7, -5);
	printf ("c1 is : ");
		cx_print (c1);
	printf ("c2 is : ");
		cx_print (c2);
	printf ("c1+c2 = ");
		cx_print (cx_add (c1, c2));
	printf ("c1-c2 = ");
		cx_print (cx_sub (c1, c2));
	printf ("c1*c2 = ");
		cx_print (cx_mul (c1, c2));
	printf ("c1/c2 = ");
		cx_print( cx_div (c1, c2));
	printf ("Negation of c1 : ");
		cx_print (cx_neg (c1));
	printf ("Inversion of c2 : ");
		cx_print (cx_inv (c2));
	printf ("Conjuction of c2: ");
		cx_print (cx_conj(c2));
	printf ("c2's real part is: %0.2lf\n", cx_real_part(c2));
	printf ("c2's imaginary part is: %0.2lfi\n", cx_imag_part(c2));
	return 0;
}
