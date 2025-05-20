#include<stdio.h>
 int main (){
     int  row =1,i , j;
     for(i=5;i>=row;i--){
        for(j=5;j>=i;j--){
            printf("%d ",j);
            
        }
        printf("\n");
     }
     return 0 ;
 }