#include <stdio.h>
#include <stdlib.h>

struct Word{    
int id;   
char tr[30];    
char en [30];    
char type[8]; 
}; 
void read_words(char file[],struct Word d[],int *n);  // 1.sorunun b şıkkının fonksiyon prototipi
void sort_words(struct Word d[],int n); // 1.sorunun c şıkkının fonksiyon prototipi
void print_words(struct Word d[],int n); // 1.sorunun d şıkkının fonksiyon prototipi
void print_tr_meaning(struct Word d[],int n,char en[]); //1.sorunun e şıkkının fonksiyon prototipi

int main(){   
struct Word d[1000];    
int n;   
read_words("words.txt",d,&n);    
sort_words(d,n);    
print_words(d,n);   
print_tr_meaning(d,n,"good");    
return 0; 
} 
void read_words(char file[],struct Word d[],int *n){    // Burada turkce kelime,ingilizce kelime ve kelime turunu dosyadan okuyor.
     FILE *fp;    
     fp = fopen(file,"r");    
     if (fp == 0){        
     printf("Can not read file - %s \n",file);       
     return;    
     }    
     int i=0;    
       while( !feof(fp) ){        
       fscanf(fp,"%s %s %s",d[i].tr,d[i].en,d[i].type);        
       d[i].id = ++i;   //i++ degilde ++i olmasinin nedeni id ozelligi 1 den baslamasidir.
       }    
       fclose(fp);     *n = i;    
     printf("%d words read from file \n",*n); 
   }
  void sort_words(struct Word d[],int n){    // Burada ingilizce kelimeleri alfabetik siralama yapar.
        struct Word temp;     //Bunu char ile tanimlasaniz da olur ama kod dogru uretebilmesi icin struct Word temp tanimlamak daha dogru olur.
             for(int i=0;i<n;i++){        
                 for(int j=i;j<n;j++){            
                      if(strcmp(d[i].en,d[j].en) > 0 ){                
                             temp = d[i];                
                             d[i] = d[j];                
                             d[j] = temp;            
                       }        
                 }    
           } 
     } 
   void print_words(struct Word d[],int n){    //Burada "id - en : tr (type)" formatini ekrana yazdirmaya yarayan fonksiyondur.
         for(int i=0;i<n;i++){        
              printf("%d - %s : %s (%s) \n", d[i].id, d[i].en, d[i].tr, d[i].type);    
            } 
    } 
   void print_tr_meaning(struct Word d[],int n,char en[]){    // Burada kelime dizisi kelime sayisi ve kelimenin ingilizce karsiliklari kullanarak
                                                                 "good : iyi (s)" gibi ciktilari ekrana yazar.
        for(int i=0;i<n;i++){        
            if(strcmp(d[i].en,en) == 0){            
                printf("%s : %s (%s) \n", d[i].en, d[i].tr, d[i].type); 
                }    
           } 
     } 
    
