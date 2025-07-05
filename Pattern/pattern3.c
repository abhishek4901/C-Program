#include<stdio.h>
 int main (){
     int  row , col =4,i , j ,num=1;
     printf("enter the rows");
     scanf("%d",&row);
     for(i=1;i<=row;i++){
        for(j=1;j<=col;j++){
            printf("%d ",num);
            num++; 
            
        } 

        printf("\n");
     }
     return 0 ;
 }