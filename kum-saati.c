#include <stdio.h>
#include <stdlib.h>

/*
 * Duz Ucgen:
 *
 *  n=1 *        i  b  y
 *               0  0  1
 *
 *  n=2 *        0  1  1
 *     ***       1  0  3
 *
 *  n=3  *       0  2  1
 *      ***      1  1  3
 *     *****     2  0  5
 *
 *  n=4   *      0  3  1
 *       ***     1  2  3
 *      *****    2  1  5
 *     *******   3  0  7
 *
 *  n=5    *     0  4  1
 *        ***    1  3  3
 *       *****   2  2  5
 *      *******  3  1  7
 *     ********* 4  0  9
 *
 * b=n-i-1
 * y=2i+1
 *
 *Ters Ucgen:
 *
 *  n=1 *        i  b  y
 *               0  0  1
 *
 *  n=2 ***      0  0  3
 *       *       1  1  1
 *
 * n=3 *****     0  0  5
 *      ***      1  1  3
 *       *       2  2  1
 *
 * n=4 *******   0  0  7
 *      *****    1  1  5
 *       ***     2  2  3
 *        *      3  3  1
 *
 * n=5 ********* 0  0  9
 *      *******  1  1  7
 *       *****   2  2  5
 *        ***    3  3  3
 *         *     4  4  1
 *
 * b=i
 * y=2*(n-i)-1
 */
 
/*
 * bas_satir
 *
 * int b= bosluk sayisi, int y= yildiz sayisi
 *
 * Ilk once bosluk ve ardindan yildiz sayisini basiyor
 *
 * Ornek:
 * 
 * b=2 y=1
 * basilan:
 *    *
 * b=1 y=3
 * basilan:
 *   ***
 *
 *b=0 y=5
 * basilan:
 *  *****
 *
 */
 
 /*
 * bas_karakter_tekrar
 * Parametreler char c, int n
 * char c, n defa basiyor
 * ornekler:
 * c= '*', n = 5
 * basilan: *****
 * c = 'a', n = 3
 * basilan: aaa
 * c= 'x', n = 6
 * basilan: xxxxxx
 * c= 'm', n = 1 
 * basilan: m
 */

 void bas_karakter_tekrar(char c,int n) {
  for (int i = 0 ; i < n ; i++) {
    printf("%c",c);
  }		
}
void bas_satir(int b, int y){
  bas_karakter_tekrar(' ',b);
  bas_karakter_tekrar('*',y);
  printf("\n");
}
 void ters_ucgen_bas(int n){
 	for(int i = 0 ; i < n-1 ; i++){
 		bas_satir(i,2*(n-i)-1);
	}	
 }
 void duz_ucgen_bas(int n){
 	for(int i = 0 ; i < n ; i++){
 		bas_satir(n-i-1,2*i+1);
	}	
}
 void kum_saati_bas(int n){
	ters_ucgen_bas(n);
	duz_ucgen_bas(n);
}

int main(){ 
  int n;
  printf("Sayi girin:");
  scanf("%d",&n);
  kum_saati_bas(n);

 return 0;
}
