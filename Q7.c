//Design a user defined function to delete a specific element from an array. Design
//an appropriate main() to test the delete operation for all occurrences of the
//specific element and print the array elements

#include<stdio.h>
int delete(int arr[], int n, int pos)
{
	int i;
	for(i = pos; i < n; i++)
	{
		arr[i] = arr[i + 1];
	}	
	n = n - 1;
	return n;
}

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

void main()
{
	int n ,arr[100], index[100], i, j, k, pos, ele;
	 printf("Enter the size of the array:");
	 scanf("%d",&n);
	input(arr, n);
	printf("your array elements before operation:\n");
	print(arr, n);

	printf("Enter the element to delete from array: ");
	scanf("%d", &ele);
	
	j = 0;
	for(i = 0; i < n; i++)
	{
		if(arr[i] == ele)
		{
			index[j] = i;
			j++;
		}
	}

	printf("Index array is:\n");
	print(index, j);	
	
	for(i = 0; i < j; i++)
	{
		pos = index[i];
		n = delete(arr, n, pos);
		for(k = 0; k < j; k++)
		{	
			index[k] = index[k] - 1;	
		}		
	}

	printf("The Desired array is:\n");
	print(arr, n);
}


/*
output

Enter the size of the array:5
Enter the elements of array: 55
44
55
33
22
your array elements before operation:
55	44	55	33	22	
Enter the element to delete from array: 55
Index array is:
0	2	
The Desired array is:
44	33	22	
*/






	