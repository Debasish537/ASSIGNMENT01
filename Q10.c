/*Design a user defined function to sort the array elements in ascending order.*/
#include<stdio.h>
void print(int arr[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n");
	return;	
}
void input(int arr[], int n)
{
	int i;
	printf("Enter the elements of array: ");
	for(i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	return;
}
void sort(int arr[],int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
void main()
{
	int n ,arr[100];
	printf("Enter the size of the array:");
	scanf("%d",&n);
	input(arr, n);
	printf("your array elements before operation:");
	print(arr, n);
	printf("The sorted array is:");
	sort(arr,n);
	print(arr,n);
}

/* output


Enter the size of the array:5
Enter the elements of array: 55
44
33
22
11
your array elements before operation:55	44	33	22	11	
The sorted array is:11	22	33	44	55
*/