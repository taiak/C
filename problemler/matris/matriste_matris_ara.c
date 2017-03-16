#include <stdio.h>
void swap (int *first, int *sec)
{
	int swap = *first;
	*first = *sec;
	*sec = swap;
}
/* make matrix 1, matrix 2*/
void swap_matrix (int **first, int **sec)
{
	int *swap = *first;
	*first = *sec;
	*sec = swap;
}
int compMatrixs (int *b_matx, int *s_matx, int b_col, int k_row, int k_col) 
{
	int aralik = b_col - k_col, flag = 1;
	for(; 0 < k_row && flag ; k_row--)
	{
		for(; 0 < k_col && flag ; k_col--)
		{
			if (*(b_matx++) != *(s_matx++))
				flag = 0;
		}
		b_matx += aralik;
	}
	return !flag;
}
void searchMatrixs (int *b_matx, int *s_matx, int b_row, int b_col, int s_row, int s_col)
{
	// ikinci matris buyukse yer degistir
	if(b_row * b_col < s_row * s_col){ //can be make like func
		swap(&b_row, &s_row);
		swap(&b_col, &s_col);
		swap_matrix(&b_matx, &s_matx);
	}
	//optimizasyon:
	//bosuna işe yaramaz satırlara bakmaması için def_row = b_row - s_row
	//default row and column
	int def_row, def_col, sonuc;
	const int *b_end = b_matx + b_row * b_col;
	
	for (def_row = b_row - s_row + 1; 0 < def_row && b_matx < b_end ; def_row--, b_matx += s_row)
	{
		for (def_col = b_col - s_col + 1 ; 0 < def_col ; def_col--, b_matx++)
		{
			if(*b_matx == *s_matx){
				sonuc = compMatrixs(b_matx, s_matx, b_col, s_row, s_col);
				if( sonuc == 0 )
					printf("\nBulunan nokta:(%d, %d)\n",
						b_row - s_row + 2 - def_row,
						b_col - s_col + 2 - def_col);
			}
		}
	}
	if(sonuc)
		printf("Matris bulunamadı!!!\n");
}
int main()
{
	int buyuk_matris[5][5] =
	{
	{10, 20, 13, 14, 15},
	{60, 70, 18, 19, 20},
	{11, 12, 23, 24, 25},
	{12, 13, 12, 13, 14},
	{15, 16, 15, 16, 17}
	};
	int *buyuk = &buyuk_matris[0][0];
	
	int kucuk_kare[3][3] =
	{
	{13, 14, 15},
	{18, 19, 20},
	{23, 24, 25}
	};
	int kucuk_diger[2][3] =
	{
	{12, 13, 14},
	{15, 16, 17}
	};
	printf("\nkucuk_karede->");
	searchMatrixs (buyuk, &kucuk_kare[0][0], 5, 5, 3, 3);
	printf("\nkucuk_diger-> ");
	searchMatrixs (buyuk, &kucuk_diger[0][0], 5, 5, 2, 3);

	return 0;
}
