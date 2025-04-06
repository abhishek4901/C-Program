#include<stdio.h>
 int main (){
     int  row =5 ,i , j ;
     printf("enter the rows \n");
    //  scanf("%d",&row);
     for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
     }
     return 0 ;
 }