#include<stdio.h>
int maximum(int arr[],int n)
{
  int i,max=-9999;  
  for(i =0;i<n;i++)
  {
   if(arr[i]>max)
   {
     max = arr[i];
   }
  }
  return max;
}

void main()
{
 int arr[10],i,size;
 printf("Enter the size of the array:");
 scanf("%d",&size);
 printf("Enter the elements:\n");  
  for(i = 0;i<size;i++)
  {
   scanf("%d",&arr[i]);
  }
 int a = maximum(arr,size);
 printf("Maximum element in array is:%d\n",a);
}

/*
output

Enter the size of the array:5
Enter the elements:
10
20
30
40
50
Maximum element in array is:50
*/