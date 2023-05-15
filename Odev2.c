#include <stdio.h>
#include <stdlib.h>

void bubblesort(int dizi[])//diziyi kucukten buyuge dogru siralamak icin bubble sort kullanildi.
{
	int i,j;
	
	for(i = 0; i < 9; i++)
	{
		for(j = 1; j < 9-i; j++)
		{
			if(dizi[j-1] > dizi[j])
			{
				int temp = dizi[j];
				dizi[j] = dizi[j-1];
				dizi[j-1] = temp;
			}
		}
	}
}

int BinarySearch(int dizi[], int bas, int son, int arananSayi)//dizi de aranan sayiyi bulmak icin Binary Search fonksiyonu
{
	while(son >= bas)
	{
		int orta = dizi[(bas + son)/2];
		if (orta == arananSayi)
		return 1;
		
		if(orta < arananSayi)
		bas++;
		
		if(orta > arananSayi)
		son--;
	}
	return -1;
}

int main(int argc, char *argv[]) 
{
	int dizi[]={4,8,3,84,47,76,9,24,68};
	
	bubblesort(dizi);
	
	int arananSayi;
	printf("Aramak istediginiz sayiyi giriniz: ");//Kullanicidan aramak istedigi sayinin girilmesi istenir.
	scanf("%d",&arananSayi);
	
	int sonuc = BinarySearch(dizi, 0, 8, arananSayi);//Fonksiyona parametreler gonderilir.
	
	//Gelen sonuca gore elemanin dizide olup olmadigi kullanica bildirilir.
	if(sonuc == 1)
	printf("%d sayisi dizide mevcuttur.",arananSayi);
	
	if(sonuc == -1)
	printf("%d sayisi dizide bulunmamaktadir.",arananSayi);
	
	return 0;
}
