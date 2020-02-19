#include<stdio.h>
int fact(int n)
{
    if(n==0)
    return 1;
    
    return n*fact(n-1);
}
void main()
{
    int n;
    int res;
    
    printf("\n enter n");
    scanf("%d",&n);
    res=fact(n);
    printf("\n %d!=%d",n,res);
}
