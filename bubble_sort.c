#include<stdio.h>
#include<time.h>


void bubble_sort(int a[],int n)
{
int i,j;
int temp;
for(i=0;i<n;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("sorted array is :\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}
void main()
{
clock_t start,end;
double cpu_time_used;

start=clock();
int a[1000];
int n,i;
printf("enter the size of the array\n");
scanf("%d",&n);
printf("enter the elements of the array\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

bubble_sort(a,n);

  end = clock();
 
  cpu_time_used= ((double) (end - start)) / CLOCKS_PER_SEC;
  printf("time taken is %lf",cpu_time_used);
}

output:

enter the size of the array                                                                                                                     
5                                                                                                                                               
enter the elements of the array                                                                                                                 
79                                                                                                                                              
47                                                                                                                                              
76                                                                                                                                              
10                                                                                                                                              
99                                                                                                                                              
sorted array is :                                                                                                                               
10                                                                                                                                              
47                                                                                                                                              
76                                                                                                                                              
79                                                                                                                                              
99                                                                                                                                              
time taken is 0.000277  
  
  
  enter the size of the array                                                                                                                     
5                                                                                                                                               
enter the elements of the array                                                                                                                 
90                                                                                                                                              
38                                                                                                                                              
46                                                                                                                                              
58                                                                                                                                              
54                                                                                                                                              
sorted array is :                                                                                                                               
38                                                                                                                                              
46                                                                                                                                              
54                                                                                                                                              
58                                                                                                                                              
90                                                                                                                                              
time taken is 0.000343
  
  enter the size of the array                                                                                                                     
10                                                                                                                                              
enter the elements of the array                                                                                                                 
1000                                                                                                                                            
46                                                                                                                                              
29                                                                                                                                              
5678                                                                                                                                            
20                                                                                                                                              
999                                                                                                                                             
456                                                                                                                                             
783                                                                                                                                             
657                                                                                                                                             
209                                                                                                                                             
sorted array is :                                                                                                                               
20                                                                                                                                              
29                                                                                                                                              
46                                                                                                                                              
209                                                                                                                                             
456                                                                                                                                             
657                                                                                                                                             
783                                                                                                                                             
999                                                                                                                                             
1000                                                                                                                                            
5678                                                                                                                                            
time taken is 0.000408  
  
  
  
