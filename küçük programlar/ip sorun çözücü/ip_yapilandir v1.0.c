#include <stdio.h>
#include <stdlib.h> //system() için
#include <windows.h> // isimlendirme icin
#include <locale.h> // turkce dili icin
#include <conio.h> // getch icin
/* tab = 4 bosluk olarak yazilmistir.*/

// GELÝSTÝRÝLECEKLER
// $$ sadece getch fonksiyonu kullanilarak performans arttirilacak
// $$ firewall ayarlari konusu tartisilacak 

void UYARI( int tur ){
		system("@cls");
	switch(tur){
		case 'b': // baglantiyla alakali
			printf("\n\n\n\n%8s->Kablolu baðlantý için:","");
				printf(" Baðlantýlarý kontrol ediniz...");
			printf("\n\n%8s->Kablosuz baðlantý için:","");
				printf(" Kablosuz ayarlarýnýzý kontrol ediniz...","");
			printf("\n\n\n\n%8s->Baðlantýnýzý kontrol ettikten sonra sorun devam ederse,","");
			printf("\n\n%10s programý tekrar çalýþtýrýnýz...","");
			break;
		case 's': // surucuyle alakali
			printf("\n\n\n\n%8sLütfen internet sürücülerini","");
			printf(" güncelleyiniz veya yükleyiniz...\n");
	}
}
void devam_mi(void){
	char cevap = 0;
	printf("\n\n\n%8sDevam etmek için bir tuþa basýnýz...","");
	cevap=getch();
}
int evet_hayir(void){
	int elcevap = 0;
	printf("(e/h)");
	do{
		elcevap=getch();
	}while((elcevap!='e')&&(elcevap!='E')&&(elcevap!='h')&&(elcevap!='H'));
		printf("%c\n", elcevap );
	if(elcevap == 'E')
		elcevap ='e';
	else if(elcevap == 'H')
		elcevap = 'h';
	return (elcevap=='e')?'e':'h';
}
int kontrol(void){
	int cevap = 0;
	system("@cls");
	printf("\n\n\n\n\n\n%12sLütfen birkaç dakika bekledikten sonra cevap veriniz...","");
	printf("\n\n\n%12sAyarlar sonucunda internet baðlantýnýz geldi mi?","");
	cevap = evet_hayir();
	return cevap;
}
int analiz_et(void){
	int cevap = 0;
	system("@cls");
	printf("\n\n\n\n\n%8sÝnternet baðlantýnýz var mý?","");
	if(evet_hayir()=='h'){
		printf("\n\n\n\n\n%8sDaha önceden internet baðlantýnýz var mýydý?","");
		if(evet_hayir()=='e'){
				cevap = basitNetCozumu(); // cozmeye ugras	
			if( cevap ){
				UYARI('b'); // baglantiyla alakali problem oldugunu bildir
			}
			else{
				cevap = kontrol(); // islemin dogrulugunu kontrol et
				if(cevap == 'h'){ // sorun cozulmediyse diger cozumu dene
						cevap = karisikNetCozumu(); // cozmeye ugras
					cevap = cevap?kontrol():0; 
				}
				else
					cevap = 0;
			}
		}
		else{
			UYARI('b'); // baglantiyla alakali problem oldugunu bildir
			cevap = 0;
			devam_mi();
		}
	}
	else{
		cevap = 0;
		UYARI('s');
		devam_mi();
	}
	return cevap;
}
int basitNetCozumu(void){
	system("@cls");
	printf("\n%s->  Lütfen bekleyiniz...\n\n","");
	printf("\n\n%s--->  Önbellek temizleniyor...\n\n","");
		system("ipconfig /flushdns");
	printf("\n\n%s----->  Geçersiz ip siliniyor...\n\n","");
		system("ipconfig /release");
	printf("\n\n%s------->  Yeni ip alýnýyor...\n\n","");
		system("ipconfig /renew");
	devam_mi();
	return 0;
}
int karisikNetCozumu(void){
	system("@cls");
	printf("\n%s->  Lütfen bekleyiniz...\n\n","");
	printf("\n\n%s--->  Arabirim sýfýrlanýyor...\n\n","");
		system("netsh int ip reset a.txt");
	printf("\n\n%s--->  Winsock kataloðu sýfýrlanýyor...\n\n","");
		system("netsh winsock reset");
	printf("\n\n%s--->  Proxy ayarlarý sýfýrlanýyor...\n\n","");
		system("netsh winhttp reset proxy");
//	printf("\n\n%s----->  Güvenlik duvarý ayarlarý sýfýrlanýyor...\n\n","");
//		system("netsh advfirewall reset");
	printf("\n\n%s------->  Önbellek temizleniyor...\n\n","");	
		system("ipconfig /flushdns");
	printf("\n\n%s--------->  Geçersiz ip siliniyor...\n\n","");
		system("ipconfig /release");
	printf("\n\n%s----------->  Yeni ip alýnýyor...\n\n","");
		system("ipconfig /renew");
	devam_mi();
	return 0;
}
int main(){
	system("COLOR 57");// konsol rengini degistir
	setlocale(LC_ALL,"Turkish"); //turkce karakterler icin
	SetConsoleTitle("Internet Sorun Cozucu v1.0");
	int cevap;
	cevap=analiz_et();
	system("@cls"); // ekrani temizle
	printf("\n\n\n\n\n\n\n");
	switch( cevap ){
		case 'h': case 1: // analiz_et hata parametreli donerse
			printf("\n\n\n\n%8sProgram baþarýlý sonlandýrýlamadý!..","");
			break;
		case 'e': case 0: // analiz_et hatasiz donerse
			printf("\n\n%8sProgram baþarý þekilde sonlandýrýldý!..","");
			printf("\n\n%8sEðer internete eriþemezseniz,","");
			printf(" bilgisayarýnýzý yeniden baþlatýnýz...");
	}
	if( cevap == 'h' )
		printf("\n\n\n\n%8sProgramdan çýkmak için bir tuþa basýnýz...","");
	cevap = getch();
	return 0;
}
// Programin her hakki þahsima(Taha Yasir Kiroglu) aittir. 
// Program sonucunda olusabilecek aksakliklardan dolayi sorumluluk kabul etmiyorum.
// Ticari olarak bana danisilmasi kaydiyla kullanilabilir.
// Ticari olmayan kullanimlarda kod istenilen sekilde alip kullanilabilir.
