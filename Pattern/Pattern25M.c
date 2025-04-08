#include<stdio.h>
 int main (){
     int  row=5, col=1,i , j ;
     for(i=1;i<=row;i++){
        for(j=5;j>=col;j--){
            printf("%d" ,j);
        }
        col++;
        
    
        printf("\n");
     }
     return 0 ;
 }