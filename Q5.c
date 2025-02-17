#include <stdio.h>
#include<stdlib.h>
void display(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int insert_after_element(int arr[], int size, int element_to_find, int new_element) {
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] == element_to_find) {
            break;
        }
    }
    if (i == size) {
        printf("Element not found.\n");
        exit(1);
    }
    for (int j = size - 1; j > i; j--) {
        arr[j + 1] = arr[j];
    }
    arr[i + 1] = new_element;
    size=size+1;
    return size;
    
}
void input(int arr[],int size){
    int i;
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
}
void main() {
    int arr[100],size;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    printf("Enter the elements of the array");
    input(arr,size);
    printf("Before insertion:\n");
    display(arr,size);
    int element_to_find, new_element;
    printf("Enter the element to find: ");
    scanf("%d", &element_to_find);
    printf("Enter the element to insert: ");
    scanf("%d", &new_element);
    int d=insert_after_element(arr,size, element_to_find, new_element);
    printf("\nAfter insertion:\n");
    display(arr, d);
}


/*

output

Enter the size of the array:5
Enter the elements of the array66
55
33
22
11
Before insertion:
Array elements: 66 55 33 22 11 
Enter the element to find: 55
Enter the element to insert: 44

After insertion:
Array elements: 66 55 44 33 22 11
*/