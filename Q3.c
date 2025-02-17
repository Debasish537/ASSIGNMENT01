#include<stdio.h>
void found(int arr[],int n,int element)
{
    int i,c=0;
    printf("The element %d is present at position: ",element);
    for(i=0;i<n;i++)
    {
        if(arr[i]==element)
        {
            printf("%d\t",i+1);
            c++;
        }
        
    }
    if(c==0)
    {
        printf("Element not found");
    }
    else
    {
        printf("\n");
    }
     
}

void main()
{
 int arr[100],i,size,element;
 printf("Enter the size of the array:");
 scanf("%d",&size);
 printf("Enter the elements:\n");  
  for( i = 0;i<size;i++)
  {
   scanf("%d",&arr[i]);
  }
 printf("Enter the element to be searched:\n");
 scanf("%d",&element);  
 found(arr,size,element);
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
Enter the element to be searched:
40
The element 40 is present at position: 4
*/