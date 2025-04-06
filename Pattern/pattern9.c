#include<stdio.h>
 int main (){
     int  row =1,i, j ,num=5 ;
    //  printf("enter the rows");
    //  scanf("%d",&row);
     for(i=5;i>=row;i--){
        for(j=5;j>=i;j--){
            printf("%d ",num);
        } 
        num--;
        printf("\n");
     }
     return 0 ;
 }