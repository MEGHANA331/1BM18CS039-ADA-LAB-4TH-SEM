#include<stdio.h>
#include<stdlib.h>
void toh(int n,char s,char t,char d)
{
if(n==1)
{
printf("\n move disc 1 from source %c to dest %c",s,d);
return;
}
toh(n-1,s,d,t);
printf("\n move disc %d from source %c to dest %c",n,s,d);
toh(n-1,t,s,d);
}
int main()
{
int n;
printf("enter the number of discs\n");
scanf("%d",&n);
toh(n,'A','B','C');
return 0;
}
