// #include<stdio.h>    
// int main()    
// {    
//  int a=1;  
// //  printf("enter the number");
// //  scanf("%d",&n);
   
//  for(int i=1;i<=5;i++)
//  {    
//  for(int j=1;j<=i;j++){

// //   printf(" %d",a); 
//   printf(" %c",a+64); 
// //   a=a+1;   
//  }
     
//   printf(" \n");    
//    }  
//   return 0;  
//  }    
#include<stdio.h>    
int main()    {    
 int a=1;  
//  printf("enter the number");
//  scanf("%d",&n);
   
 for(int i=1;i<=5;i++)
 {    
 for(int j=1;j<=5-i;j++){
  printf(" ");
 }
   for(int j=1;j<=i;j++){
// printf(" %d",i);  
printf(" %c",i+64);  
 }  
  printf(" \n");    
   }  
  return 0;  
 }    