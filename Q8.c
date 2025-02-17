//Design a user defined function to replace all occurrences of a specific element in
an array with a user entered value. Design an appropriate main() to test the
operation and print the array elements
#include<stdio.h>
void replace(int arr[], int n, int old_value, int new_value) {
    int k=0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == old_value) {
            arr[i] = new_value;
            k++;
        }
    }
    if(!k){
        printf("unable to replace");
    }
}
void display(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
void input(int arr[], int n) {
    printf("Enter element of the array:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}
int main() {
    int n, arr[100], ele, new_val;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    input(arr, n);
    printf("Array before operation is:\n");
    display(arr, n);
    printf("Enter the element you want to replace: ");
    scanf("%d", &ele);
    printf("Enter your new value: ");
    scanf("%d", &new_val);
    replace(arr, n, ele, new_val);
    printf("Array after replacement is:\n");
    display(arr, n);
    return 0;
}


/*
output

Enter the size of the array:
5
Enter element of the array:
66
44
33
22
11
Array before operation is:
66	44	33	22	11	
Enter the element you want to replace: 66
Enter your new value: 55
Array after replacement is:
55	44	33	22	11
*/