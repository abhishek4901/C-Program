#include<stdio.h>
 int main (){
     int  row , col,i , j ;
     printf("enter the rows ");
     scanf("%d",&row);
     printf("enter the col ");
     scanf("%d",&col);
     for(i=1;i<=row;i++){
        for(j=1;j<=col;j++){
            printf("%d",i);
        }
        col--;
        printf("\n");
     }
     return 0 ;
 }