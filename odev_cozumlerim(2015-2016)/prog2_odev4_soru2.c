2-
a) Header'lar # ile başlar ve ya > ile ya da " ile biterler.
 Bu sembollerin dışındaki semboller tanımlanamayacağı için kod uyarı verir.
 Fakat program çalışır.
 Düzgün hali: # include <stdio.h> 
 
b) Fonksiyonun parametresiz olduğunu söylerken aynı zamanda parametre verildiği
  için fonksiyon çalışmaz. Ayrıca arg1 değeri daha önce fonksiyon içinde tanımlanmadığı
  için, fonksiyon arg1'in türünü ve değerini bilemediğinden dolayı hata verir ve çalışmaz.
  
c) İlk hata, makro tanımlanırken"=" işareti kullanılmasıdır.Oysaki makrolar tanımlanırken = kullanılmaz.
  İkinci hata, kullanılan  “ ve ” işaretlerinin okunmaması. Yerlerine " yazılarak problem çözülüyor.                       
  Üçüncü hata,puts(mesaj) ifadesinin main fonksiyonu içinde kullanılmamasıdır.Bu hatanın sonucu olarak komut 
  çalıştırılmaz. 