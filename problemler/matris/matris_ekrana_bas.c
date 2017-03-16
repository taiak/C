void printMatrix_v1 (int *start, int row, int column)
{
	int i, j;
	for(j = 0; j < row ; j++){
		putchar('{');
		for(i = 0; i < column ; i++, start++)
			printf(" %d", *start);
		printf(" }\n");
	}
	
}
void printMatrix_v2 (int *start, int row, int column){
	int i, *end = start + row * column;
	for(i = 1; start < end ; start++, i++){
		printf(" %d", *start);
		if(i == column){
			i = 0;
			putchar('\n');
		}
	}
}
