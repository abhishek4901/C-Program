#include<stdio.h>
int add(int m, int n)
{
    if(n == 0)
        return m;
    else
    return add(m, n-1) + 1;   
}
int main()
{
    int n, m;
    printf("Enter the two numbers \n");
    scanf("%d%d", &n, &m);
     add(n, m);     // function calling
    printf("Sum: %d", add(n, m));
    return 0;
}