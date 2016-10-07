#include <stdio.h>
int main(){
  int alt_sinir,ust_sinir;
  printf("Alt siniri giriniz:\n");
  scanf("%d",&alt_sinir);
  printf("Ust siniri giriniz:\n");
  scanf("%d",&ust_sinir);
  
  while ( alt_sinir <= ust_sinir){
    printf("%d\t",alt_sinir);
    alt_sinir=alt_sinir+1
  }
printf("\n Bu kadar!");
    
return 0;
}
    