   #include <stdio.h> 
   #include <stdlib.h> 
   
   int main()   
   {     
      int i,j; 
      
      for (i=0;i<12;i++){      // Hatali Satir No: 8.satir. Duzeltilmis Hali : for(i=0;i<11;i++)      
            if (i<6) {                
               for(j=0; j<=i; j++) printf("*");             
               printf("\n");          
              }else{            
                 for(j=0; j< (10-i); j++) printf(" ");  //  Hatali Satir No: 13.satir. Duzeltilmis Hali : for(j=0;j<i-5;j++)         
                 for(j=0; j< (i-5); j++) printf("*");   //  Hatali Satir No: 14.satir. Duzeltilmis Hali : for(j=0;j<11-i;j++)         
                printf("\n");         
             }    
          }    
          
      return 0; 
   }
          
    // Not : 1. Selcuk Hocanın Hata bulma sorusunda puan almaniz icin hatali satiri dogru bulup,hatali satiri tamamen dogru duzeltilmis olmalidir.
    // Not : 2. Hatayi dogru bulup duzeltmezseniz veya yanlis duzeltilirseniz veya hatayi yanlis yerde bulursaniz puan alamazsiniz.
