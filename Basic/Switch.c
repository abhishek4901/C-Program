//select weekend name using switch case

#include<stdio.h>
int main()
{
    int num;
    printf("enter the  day number");
    scanf("%d",&num);
    switch (num){
    case 1:
    printf("Sunday");
    break;
    case  2:
    printf("Monday");
    break;
    case 3:
    printf("Tuesday");
    break;
    case 4:
    printf("wednesday");
    break;
    case 5:
    printf("Thursday");
    break;
    case 6:
    printf("Friday");
    break;
    case 7:
    printf("Saturday");
    break;
    default :
    printf("you are enter wrong input");
}

    return 0;
}