#include<stdio.h>
 int main (){
     int  n=5,c=5,i , j ;
     for(i=1;i<=n;i++){
        for(j=1;j<=c;j++){
            printf("%d",j );
        }
        c--;
        printf("\n");
     }
     return 0 ;
 }