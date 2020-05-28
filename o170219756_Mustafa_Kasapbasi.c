/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

char aylar[12][20];
char sirali_aylar[12][20];
char *p_aylar[12];


void sirala(char *aylar[], int size){
    int i=0,j=0;
    char *temp;
    //Selection SORT 
    for(i=0;i<size-1;i++){
        for(j=i+1;j<size;j++){
            if(*aylar[i]>=*aylar[j]){
                temp=aylar[i];
                aylar[i]=aylar[j];
                aylar[j]=temp;
            }
            
        }
    }
    
    //sirali aylar dizisine atama
    for(i=0;i<size;i++)
       strcpy(sirali_aylar[i],aylar[i]);
    
    
    //yazdirma 
    for(i=0;i<size;i++){
      printf("%s\n",sirali_aylar[i]);
    }
  
}

int size=12;
int main()
{
    int sayac=0;
    // CEVAP 1 ve kısıt do while
    do{
        printf("%d. ayı giriniz ",sayac+1);
        scanf("%19s",aylar[sayac]);
        
        
        sayac++;
    }while(sayac<size);
    
    
    
     // CEVAP 2 ve kısıt for dongüsü
    int i=0;
    for(i=0;i<size;i++){
       p_aylar[i]=aylar[i];
    }
    
    
    //Cevap 3 
    sirala(p_aylar,size);
 
    // CEvap 4
    //Github Yüklemesi
    return 0;
}


