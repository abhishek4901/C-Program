#include<stdio.h>
 int main (){
     int  row , col=5,i , j ;
     printf("enter the rows");
     scanf("%d",&row);
     for(i=1;i<=row;i++){
        for(j=1;j<=col;j++){
            printf("%d",i);
        }
        printf("\n");
     }
     return 0 ;
 }