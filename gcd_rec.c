#include<stdio.h>
#include<stdlib.h>
int gcd(int m,int n)
{
if(n==0)
{
return m;
}
return gcd(n,m % n);
}
void main()
{
int m,n,rem;
printf("enter the value of m and n \n");
scanf("%d %d",&m,&n);
rem=gcd(m,n);
printf("gcd(%d,%d)=%d\n",gm,n,rem);
}
