#include<stdio.h>
void input(int arr[],int n)
{
  printf("Enter the elements:\n");  
  for(int i = 0;i<n;i++)
  {
   scanf("%d",&arr[i]);
  }
}

void print(int arr[],int n)
{
 printf("Elements in the array are:\n");
 for(int i=0;i<n;i++)
 {
   printf("%d\t",arr[i]);
 }
 printf("\n");
}

void main()
{
 int arr[100],size;
 printf("Enter the size of the array:");
 scanf("%d",&size);
 input(arr,size);
 print(arr,size);
}

/*
output

Enter the size of the array:5
Enter the elements:
55
44
33
22
11
Elements in the array are:
55	44	33	22	11
*/