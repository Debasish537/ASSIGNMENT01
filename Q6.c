/*Design a user defined function to delete an element from a specific position of
an array. Design an appropriate main() to test the delete operation and print the
array elements using a user defined function.*/
#include <stdio.h>
void input(int arr[], int n)
{
    printf("Enter element of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}
int delete(int arr[], int n, int pos)
{
    int i;
    for (i = pos; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    n = n - 1;
    return n;
}
void print(int arr[], int k)
{
    int i;
    for (i = 0; i < k; i++)
    {
        printf("%d\t", arr[i]);
    }
}

void main()
{
    int arr[100], n, pos;
    printf("Enter the size of the array");
    scanf("%d", &n);
    printf("Enter the elements of the array:");
    input(arr, n);
    printf("Enter the position:");
    scanf("%d", &pos);
    int k = delete (arr, n, pos);
    printf("The array after deletion operation:");
    print(arr, k);
}

/*
output

Enter the size of the array5
Enter element of the array:
55
44
33
22
11
Enter the position:3
The array after deletion operation:55	44	33	11
*/