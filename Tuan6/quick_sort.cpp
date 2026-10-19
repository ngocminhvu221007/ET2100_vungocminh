#include <stdio.h>
void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void swap ( int *a, int *b){
    int temp =*a;
    *a = *b;
    *b=temp;
}
int partition(int arr[], int left, int right, int n) {
    int pivot=arr[left];
    int i=left+1; 
    int j=right;
    while (i <=j){
        while (i <= right && arr[i] < pivot) {
            i++;
        }
        while ( j >= left && arr[j] > pivot) {
            j--;
        }
        if (i<j) {
            swap (&arr[i], &arr[j]);
            print(arr, n);
            i=i+1;
            j=j-1;
        }
        else break;
    }
    swap (&arr[left], &arr[j]);
    print(arr, n);
    return j;
}
void quick_sort (int arr[], int left, int right, int n) {
    if (right - left <= 0) return;
    else {
        int pivot_index = partition (arr, left, right, n);
        quick_sort (arr, left, pivot_index -1, n);
        quick_sort (arr, pivot_index +1, right, n);
    }
}
int main(){
int arr[]= {101, 23, 57, 13, 25, 121, 87, 36, 13, 204, 111, 89, 59};
int n=13;
for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]); }
    printf("\n");
quick_sort(arr, 0, n-1, n);
print(arr, n);
}