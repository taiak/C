#include <stdio.h>
#include <ctype.h>
#define al(c) c=getchar()
// kaynak:http://www.wseas.us/e-library/conferences/2011/Cambridge/NEHIPISIC/NEHIPISIC-20.pdf

int mors_et( void )
{
    int c;
    for(c=getchar() ; c != EOF ; c=getchar())
    {
    	c = toupper( c );
    	switch(c){ //turkce icin frekansi yukseklik sirali
    		case 'A': printf(".-"); break;
    		case 'E': printf("."); break;
    		case 'I': case 'ý': case 'Ý': printf(".."); break;
    		case 'R': printf(".-."); break;
    		case 'L': printf(".-.."); break;
    		case 'D': printf("-.."); break;
    		case 'K': printf("-.-"); break;
    		case 'N': printf("-."); break;
    		case 'M': printf("--"); break;
    		case 'Y': printf("-.--"); break;
    		case 'U': printf("..-"); break; 
    		case 'S': printf("..."); break;
    		case 'T': printf("-"); break;
    		case 'B': printf("-..."); break;
    		case 'O': printf("---"); break;
    		case 'ü': case 'Ü': printf("..-"); break;
    		case 'Þ': case 'þ': printf("..."); break;
    		case 'Z': printf("--.."); break;
    		case 'G': printf("--."); break;
    		case 'H': printf("...."); break;
    		case 'Ç': case 'ç': printf("-.-."); break;
    		case 'Ð': case 'ð': printf("--."); break;
    		case 'C': printf("-.-."); break;
    		case 'V': printf("...-"); break;
    		case 'P': printf(".--."); break;
    		case 'Ö': case 'ö': printf("---"); break;
    		case 'F': printf("..-."); break;
    		case 'J': printf(".---"); break;
    		case '0': printf("-----"); break;
    		case '1': printf(".----"); break;
    		case '2': printf("..---"); break;
    		case '3': printf("...--"); break;
    		case '4': printf("....-"); break;
    		case '5': printf("....."); break;
    		case '6': printf("-...."); break;
    		case '7': printf("--..."); break;
    		case '8': printf("---.."); break;
    		case '9': printf("----."); break;
    		case '@': printf(".--.-."); break;
    		case '?': printf("..--.."); break;
    		case '=': printf("-...-"); break;
    		case '!': printf("-.-.--"); break;
    		case '$': printf("...-..-"); break;
    		case '& ': printf(".-..."); break;
    		case '+': printf(".-.-."); break;
    		case ',': printf("--..--"); break;
    		case '-': printf("-....-"); break;
    		case '.': printf(".-.-.-"); break;
    		case '/': case ' ': printf(" /"); break;
    		case '\n': printf("\n"); break;
    		case ':': printf("---..."); break;
    		case ';': printf("-.-.-."); break;
		}
		putchar(' ');
    }
     putchar('\n'); //terminal kullanýcýlarý için
   return 0;
}

int main(int argc, char* argv[])
{
   mors_et(); 
   return 0;   
} 
