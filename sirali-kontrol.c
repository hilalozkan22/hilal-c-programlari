#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

 /* yukari_mi_sirali
  * Sozlesme: int,int [] -> int
  * Girdi :Dizin uzunlugu ve dizin
  * Cikti : Dizin yukari dogru sirali ise 1 yoksa 0 
  *
  * Amac: Dizindeki *her* eleman, bir sonraki eleman (varsa) ondan kucukse 1 dondurulecek, yoksa 0.
  * Bos ya da tek elemanlik dizinler için 0 dondurulecek.
  *
  * Ornekler:
  * 0, {} -> 0
  * 1, {1} -> 0
  * 1, {0} -> 0
  * 2, {1,2} -> 1
  * 2, {1,1} -> 0
  * 2, {2,1} -> 0
  * 3, {1,2,3} -> 1
  * 3, {1,3,2} -> 0
  */
 int yukari_mi_sirali(int n, int a[]){
     bool sirali=n>1;
     for(int i = 0 ; i < n-1 ; i++){
         sirali=a[i]<a[i+1]&&sirali; 
     }
         return sirali;  
 }
 
 /*
 * asagi_mi_sirali
 * Sozlesme: int,int[] -> int
 * Girdi : Dizin uzunlugu ve dizin
 * Cikti: Dizin asaga dogru sirali ise 1 yoksa 0
 * 
 * Amac: Dizindeki *her* eleman, bir sonraki eleman (varsa) ondan buyukse 1 dondurulecek, yoksa 0.
 * Bos ya da tek elemanlik dizinler için 0 dondurulecek.
 * 
 * Ornekler:
 * 0, {} -> 0
 * 1, {1} -> 0
 * 1, {0} -> 0
 * 2, {3,4} -> 1
 * 2, {1,1} -> 0
 * 2, {2,1} -> 1
 * 3, {1,2,3} -> 0
 * 3, {1,3,2} -> 0
 */
 int asaga_mi_sirali(int n, int a[]){
     bool sirali=n>1;
     for(int i = 0 ; i < n-1 ; i++){
         sirali=a[i]>a[i+1]&&sirali;
     }
         return sirali;
 }
/*
 * elemanlar
 * Sozlesme: int, int a[] -> int
 * Girdi : dizinin uzunlugu ve dizin 
 * Cikti : Donen deger bir ise buyukten kucuge veya kucukten buyuge ikiside degilse sirali degil.
 *
 * Amac: Donen degerlere uygun ciktilari almak.
 * 
 * Yontem:
 *
 * Elemanlar girildikten sonra eger yukari_mi_sirali fonksiyonundan donen deger 1 ise kucukten buyuge ciktisi cikacak.
 * Eger yukari_mi_sirali fonksiyonundan donen deger 0 ise asagi_mi_sirali fonksiyonundan donen degere bakilacak.
 * Eger asaga_mi_sirali fonksiyonundan donen deger 1 ise buyukten kucuge ciktisi cikacak.
 * asaga_mi_sirali fonksiyonundan donen deger 0 ise ne yukari ne de asaga sirali degil demektir.Bu yuzden sirali degil ciktisi cikacak.
 *
 * Ornekler :
 *
 * Dizinin eleman sayisi: 3
 * Dizinin elemanlari : 28 34 67 
 * Cikti : Dizi kucukten buyuge siralidir
 * Donen deger : 1
 * 
 * Dizinin eleman sayisi: 7
 * Dizinin elemanlari : 78 56 23 11 9 3 0 
 * Cikti : Dizi buyukten kucuge siralidir
 * Donen deger : 1
 * 
 * Dizinini eleman sayisi : 8
 * Dizinin elemanlari : 55 12 78 21 90 105 11 45 
 * Cikti : Dizi sirali degildir
 * Donen deger : 0
 * 
 */
 int elemanlar(int n, int a[]){
    
     printf("eleman sayisi gir: ");
     scanf("%d",&n);
     if(n>0){
         printf("elemanlari gir: ");
     }
     for(int i = 0 ; i < n ; i++){
         scanf("%d",&a[i]);
     }
     if(yukari_mi_sirali(n,a)==true){
         printf("kucukten buyuge");
     }
     else if(asaga_mi_sirali(n,a)==true){
         printf("buyukten kucuge");
     } 
     else{
         printf("sirali degil");
     }
 }
int main() {
    int n;
    int dizi[n];
    elemanlar(n,dizi);
    return 0;
}

