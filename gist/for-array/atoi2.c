int atoi2(char *sayi_s, int uzunluk){
	char *pSayi = sayi_s;
	int sayi = 0, indis;
	for(indis = 0; ( *pSayi ) != '\0'; indis++){
		sayi += ((*pSayi)-48) * power(10, uzunluk-indis-1);
		pSayi++;
	}
	return sayi;
}
