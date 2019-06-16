#include <stdio.h> 
#include <stdlib.h>
#define ROW 5
#define COLUMN 5 
 
double m[ROW][COLUMN] = {{1,2,3,4,5}, {4,5,6,7,8},{8,7,6,5,4},{7,6,5,4,3},{6,5,4,3,2}}; 
 
int fill_diaogonal(double a[][5], int row, int column){  // Ya da matrix[ROW][COLUMN] diye tanimlasanizda olur
 
    if(row != column) return -1; //Error  //Kare Matrise uygun degilse -1 dondurur
 
    for(int i=0; i<row; i++){         
      for(int j=0; j<column; j++){ 
 
             if(i==j) {     //Diagonal Matris icin kosul            
             a[i][j]=1;             
             } 
            if(row==i+j) {        //Antidiagonal Matris icin kosul        
            a[i][j]=-1;             
            } 
 
             if(i==row/2 && j==row/2 && a[i][[j]==a[j][row-i]) {  // Diagonal ve Antidiagonal Matris kesisim icin kosul           
             a[i][j]=0;             
             }         
         }     
     }     
    return 1; //Success // Fonksiyon basarili ise 1 dondurur
 } 
 
int main() {     
fill_diaogonal(m, ROW, COLUMN);     
return 0; 
} 
 
 
