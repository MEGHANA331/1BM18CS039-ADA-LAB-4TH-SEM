#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void quicksort(int number[25],int first,int last){
int i, j, pivot, temp;
if(first<last){
pivot=first;
i=first;
j=last;
while(i<j){
while(number[i]<=number[pivot]&&i<last)
i++;
while(number[j]>number[pivot])
j--;
if(i<j)
{
temp=number[i];
number[i]=number[j];
number[j]=temp;
}
}
temp=number[pivot];
number[pivot]=number[j];
number[j]=temp;
quicksort(number,first,j-1);
quicksort(number,j+1,last);
}
}
int main(){
int i, n, number[25];
printf("\n enter number of elements: \n");
scanf("%d",&n);
printf("\n Enter %d elements: ", n);
for(i=0;i<n;i++)
scanf("%d",&number[i]);
clock_t t;
t=clock();
quicksort(number,0,n-1);
t=clock()-t;
printf("\n Order of Sorted elements: ");
for(i=0;i<n;i++)
printf(" %d",number[i]);
double time_taken=((double)t)/CLOCKS_PER_SEC;
printf("\n quick sort function took %f seconds to execute\n",time_taken);
return 0;
}

output:


 enter number of elements: 
12

 Enter 12 elements: 78
89
45
56
12
23
36
69
85
52
74
41

 Order of Sorted elements:  12 23 36 41 45 52 56 69 74 78 85 89
 quick sort function took 0.000009 seconds to execute



 enter number of elements: 
6

 Enter 6 elements: 567
98
46
00
-555
77

 Order of Sorted elements:  -555 0 46 77 98 567
 quick sort function took 0.000003 seconds to execute




 enter number of elements: 
4

 Enter 4 elements: 96
63 
85
401

 Order of Sorted elements:  63 85 96 401
 quick sort function took 0.000002 seconds to execute















