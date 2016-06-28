#include <stdio.h>
int satir_say(const int* ,int , int );
int sutun_say(const int* ,int , int );
int maxValue(const int* ,int , int );
int minValue(const int* ,int , int );

int main(){
    int yasir[]={2,3,4,4,5,6,2,5,6};
	printf("%d",minValue(yasir,3,2));

}
int sutun_say(const int* sutun ,int lenOFmatris, int kacinci_sutun) {
    unsigned int toplam = 0;
    int i;
    sutun +=kacinci_sutun;
    for( i=0 ; lenOFmatris > i ; i++ )
    {
    	toplam += ( *sutun );
    	sutun += lenOFmatris;
	}
    return toplam;
}

int satir_say(const int* satir , int lenOFmatris , int kacinci_satir) {
    unsigned int toplam = 0;
    int i;
    satir += lenOFmatris*kacinci_satir;

   for(i=0 ; lenOFmatris > i ; i++)
   {
   	   toplam += ( *satir );
       satir++;
   }

   return toplam;
}

int maxValue(const int* satir, int lenOFmatris, int kacinci_satir)
{
    if (lenOFmatris < kacinci_satir )
       return 257;
	int i,max;
	satir += lenOFmatris*kacinci_satir;
	max = *satir;
	for(i=0 ; lenOFmatris > i ; i++ )
	{
		if( ( * satir )> max )
		   max = *satir;

		satir++;
	}
	return max;
}
int minValue(const int* sutun, int lenOFmatris, int kacinci_sutun)
{
    if (lenOFmatris < kacinci_sutun )
       return 257;
	int i, min;
	sutun += kacinci_sutun;
	min = *sutun;      
	for(i=0 ; lenOFmatris > i ; i++ )
	{
		if((*sutun)< min) 
		   min = *sutun;

		sutun+=kacinci_sutun;
	}
	return min;
}
