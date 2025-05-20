// #include<stdio.h>
//  int main (){
//      int  n,i ,g, k,j ,num=1;
//         printf("Enter the number of rows: ");   
//         scanf("%d",&n);
//         g=n-1;
//      for(i=1;i<=n;i++){
//         for(k=1;k<=g;k++){
//             printf(" ");
//         }
//         g--;
//         for(j=1;j<=2*i-1;j++){
//             printf("%d",num );
            
//         }
//         num++;
//         printf("\n");
//      }
//      return 0 ;
//  }

#include<stdio.h>
 int main (){
     int  n,i , k,j ,num=1;
        printf("Enter the number of rows: ");   
        scanf("%d",&n);
   
     for(i=1;i<=n;i++){
        for(k=1;k<=n-i;k++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("%d",num );
            
        }
        num++;
        printf("\n");
     }
     return 0 ;
 }
 