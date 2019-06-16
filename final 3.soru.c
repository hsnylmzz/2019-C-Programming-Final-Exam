#include <stdio.h> 
#include <stdlib.h>
#define ROW 5
#define COLUMN 5 
 
double m[ROW][COLUMN] = {{1,2,3,4,5}, {4,5,6,7,8},{8,7,6,5,4},{7,6,5,4,3},{6,5,4,3,2}}; 
 
int fill_diaogonal(double __a[][5]____________, int row, int column){  // Ya da matrix[ROW][COLUMN] diye tanimlasanizda olur
 
    if(_____row != column_________) _______return -1_____; //Error  //Kare Matrise uygun degilse -1 dondurur
 
    for(int _i=0____; ___i<row___; ___i++__){         
      for(int __j=0___; ___j<column____; ___j++__){ 
 
             if(____i==j____) {     //Diagonal Matris icin kosul            
             _________a[i][j]=1__;             
             } 
            if(____j=row-i________) {        //Antidiagonal Matris icin kosul        
            _______a[i][j]=-1____;             
            } 
 
             if( ___i==row/2______ && __j==row/2______ && ___a[i][[j]==a[j][row-i]_____) {  // Diagonal ve Antidiagonal Matris kesisim icin kosul           
             ______a[i][j]=0_____;             
             }         
         }     
     }     
    _________return 1____; //Success 
 } 
 
int main() {     
fill_diaogonal(m, ROW, COLUMN);     
return 0; 
} 
 
 
