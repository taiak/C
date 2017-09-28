void printMatrix_v1 (int *start, int max_row, int max_col)
{
	int i, j;
	for(j = 0; j < max_row ; j++){
		putchar('{');
		for(i = 0; i < max_col ; i++, start++)
			printf(" %d", *start);
		printf(" }\n");
	}
	
}
void printMatrix_v2 (int *start, int max_row, int max_col){
	int i, *end = start + max_row * max_col;
	for(i = 1; start < end ; i++){
		printf(" %d", *(start++));
		if(i == column){
			i = 0;
			putchar('\n');
		}
	}
}

void printSquareMatrix(int* start, int edge)
{
	int i,j;
	for (j=0; j<edge; j++) {
		putchar('{');
		for (int i = 0; i < edge; i++)
			printf("\t%4d\t", *(start++));
		printf("}\n");
	}
}
