/*Design a user defined function to merge the contents of two arrays into a third
array. Design an appropriate main() to test the operation and print the array
elements.*/
#include<stdio.h>
void input(int arr[],int m){
    int i;
    for(i=0;i<m;i++){
        scanf("%d",&arr[i]);
    }
}
void print(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}
void merge(int arr1[],int arr2[],int arr3[],int m,int n){
    int i;
     for(i = 0; i < m + n; i++) {
        if(i < m) {
            arr3[i] = arr1[i];
        } else {
            arr3[i] = arr2[i - m]; }
     }
}
void print_merge(int arr3[],int m,int n){
    int i;
    for(i=0;i<m+n;i++){
        printf("%d\t",arr3[i]);
    }
}
void main(){
    int m,n,arr1[100],arr2[50],arr3[200];
    printf("ENter the size of 1st and 2nd array respectively:");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of the 1st array:\n");
    input(arr1,m);
    printf("Enter the elements of the 2nd array:\n");
    input(arr2,n);
    printf("your inputted 1st aray is;");
    print(arr1,m);
    printf("\nyour inputted 2nd array is:\n");
    print(arr2,n);
    merge(arr1,arr2,arr3,m,n);
    printf("\nThe MErged array is:\n");
    print_merge(arr3,m,n);
}



/*
output

Enter the size of 1st and 2nd array respectively:5
3
Enter the elements of the 1st array:
11
22
33
44
55
Enter the elements of the 2nd array:
66
77
88
your inputted 1st array is;11	22	33	44	55	
your inputted 2nd array is:
66	77	88	
The Merged array is:
11	22	33	44	55	66	77	88	

*/