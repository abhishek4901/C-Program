#include<stdio.h>
 int main (){
     int  row=5 , col=5,num=5,i , j ;
     for(i=1;i<=row;i++){
        for(j=1;j<=col;j++){
            printf("*");
        }
        col--;
    
        printf("\n");
     }
     return 0 ;
 }