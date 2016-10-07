#include <stdio.h>
#include <sistem.h>
int a;
/*is_3 main fonksiyonu olarak değiştirilmeli ama */
/*daha sonra girilecek baska değerler için fonksiyon kalmasını */
/* bunu uygun buldum*/
int main(void){
  is_3(1); 
  is_1(2);
  is_2(2);
  is_4(5);
  
return 0;
}

int is_1(a){
 
  printf("is_1'de %d sene çalışıldı\n",a);
  uyku(a);
  return 0;
}
int is_2(a){
 
  printf("is_2'de %d sene çalışıldı\n",a);
   uyku(a);
  return 0;
}
int is_3(a){
 
  printf("is_3'de %d sene çalışıldı\n",a);
   uyku(a);
  return 0;
}
int is_4(a){
 
  printf("is_4'de %d sene çalışıldı\n",a);
   uyku(a);
  return 0;
}