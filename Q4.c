#include <stdio.h>
void display(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int insert(int arr[], int size, int pos, int ele) {
    for (int i = size - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }

    arr[pos] = ele;
    size++;
    return size;
}
void input(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}
int main() {
    int arr[100],size,pos,ele;
    printf("ENter the size of the array:");
    scanf("%d",&size);
    printf("Enter the elements(ineteger) of the array:");
    input(arr,size);
    printf("Before insertion:\n");
    display(arr, size);
    
    printf("Enter the valid position to insert: ");
    scanf("%d", &pos);

    printf("Enter the number to insert: ");
    scanf("%d", &ele);

    int k=insert(arr, size, pos, ele);

    printf("\nAfter insertion:\n");
    display(arr, k);

    return 0;
}


/*
output

ENter the size of the array:5
Enter the elements(ineteger) of the array:55
44
33
22
11
Before insertion:
Array elements: 55 44 33 22 11 
Enter the valid position to insert: 2
Enter the number to insert: 50

After insertion:
Array elements: 55 44 50 33 22 11
*/