#include<stdio.h>
 int main (){
     int  row =5 ,i ,num =1 , j ;
    //  printf("enter the rows");
    //  scanf("%d",&row);
     for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
            printf("%d ",num);
            num++;
        } 
        num--;
        printf("\n");
     }
     return 0 ;
 }
