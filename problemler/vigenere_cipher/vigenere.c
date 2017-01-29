#include <stdio.h>
#include <string.h> /* for strlen */

int encrypt(int chr1, int chr2){
	return ( (chr1 + chr2 - 130) % 26) + 65;
}
int decrypt(int crypt, int cipher){
	return ( (26 + crypt - cipher ) % 26) + 65;
}

void crypter(char *word, char *cipher, int wordlen, char flag){
	int i;
	char *start = cipher;
	if(flag == 0)
	{
		for(i = 0 ; i < wordlen ; i++, word++, cipher++)
		{
			if(*cipher == '\0')
				cipher = start;
			*word = encrypt (*word, *cipher);
		}
	}
	else
	{
		for(i = 0 ; i < wordlen ; i++, word++, cipher++)
		{
			if(*cipher == '\0')
				cipher = start;
			*word = decrypt (*word, *cipher);
		}
	}
}
int main()
{
	char word[] = "INSANLARALAYIKOLDUKLARIDEGERIVERINIZ";
	char key[] =  "FURKAN";
	printf ("Word\t\t:\t%s\n", word);
	printf ("Key phrase\t:\t%s\n", key);
	crypter(word, key, strlen(word), 0);
		printf ("Ciphertext\t:\t%s\n", word);
	crypter(word, key, strlen(word), 1);	
		printf ("Encrypted text  :\t%s\n", word);
	return 0;
}
