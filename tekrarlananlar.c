#include <stdio.h>
#include <stdlib.h>
/*
 * bul_dizindeki_tekrarlar
 * Sozlesme:
 * tam sayi bir dizin ve tamsayi(dizinin uzunluğu) girilecek.
 *
 * Amac:
 * Sırayla dizin içinde tekralanan sayıları printf ile basmak
 *
 * Ornekler:
 * dizi[10]={1,3,3,4,1,2,5,5,7,1}
 * Dizide tekrarlanan sayilar=3,1,5
 * dizi[4]={6,6,6,6}
 * Dizide tekrarlanan sayilar=6
 * dizi[5]={2,2,2,5,5}
 * Dizide tekrarlanan sayilar=2,5
 */
int cmpfunc (const void * a, const void * b){
    return ( *(int * )a - *(int * )b );
}
void bul_dizindeki_tekrarlar(int n, int a[] ){
  qsort(a,n,sizeof(int),cmpfunc);
  for(int i = 0 ; i < n-1 ; i++ ){
     if(a[i]==a[i+1] && (i>=n-2 || a[i+1]!=a[i+2]) )
         printf("%d ",a[i]);
     }
         printf("\n");
     return;
}

void dizi_oku(int a[],int n){

    printf("Elemanlari giriniz:\n");
    for(int i = 0 ; i < n ; i++){
       scanf("%d",&a[i]);
    }
}

void dizi_yazdir(int n,int a[]){
    for(int i = 0 ; i < n ; i++){
        printf("%d ",a[i]);
    }
}

int main()
{
    /*
      int eleman_sayisi;
      printf("Eleman sayisi giriniz:\n");
      scanf("%d",&eleman_sayisi);
      int dizi[eleman_sayisi];
      dizi_oku(dizi,eleman_sayisi);
    */
    int test01[]= {1,3,3,4,1,2,5,5,7,1};
    bul_dizindeki_tekrarlar(10, test01);
    int test02[] = {6,6,6,6};
    bul_dizindeki_tekrarlar(4, test02);
    int test03[] = {2,2,2,5,5};
    bul_dizindeki_tekrarlar(5, test03);
    int test04[]= {1,2,1,2};
    bul_dizindeki_tekrarlar(4, test04);
    int test05[]= {1,3,2,6,7,5,6,2,3,9,1,4,2,6,1};
    bul_dizindeki_tekrarlar(15, test05);
    int test06[]={1,2,3,4,5,5};
    bul_dizindeki_tekrarlar(6, test06);
    int test07[]={1};
    bul_dizindeki_tekrarlar(1, test07);
    return 0;
}
