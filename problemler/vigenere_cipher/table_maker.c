#include <stdio.h>
#include <string.h> //strlen icin
//vigenerre table üretir

void vigenere_table(const char*);

int main(){
    char yasir[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    vigenere_table( yasir );
    return 0;
}
void vigenere_table(const char* str) {
	int boy = strlen( str );
	int i;
	printf("char vigere[26][26] =\n{\n");
	for(i=0 ; boy > i ; i++){
		printf("\t{");
		int j;
		for(j = i ; j < boy ; j++ ){
			if(i != j){
				printf(",'%c'",*(str+j));					
			}
			else
				printf("'%c'",*(str+j));									
		}
		for(j = 0 ; j < i ; j++ ){
			if(i != j){
				printf(",'%c'",*(str+j));					
			}
			else
				printf("'%c'",*(str+j));									
		}
		printf("},\n");
	}
	printf("};");
}
