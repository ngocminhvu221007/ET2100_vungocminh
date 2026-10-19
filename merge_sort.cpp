#include <stdio.h>
void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void merge_array(int arr[], int m, int n, int p, int h) {
    int i = m;
    int j = n + 1;
    
    while (i < j && j <= p) {
        if (arr[i] <= arr[j]) {
            i++;
        } else { 
            int x = arr[j];
            for (int k = j - 1; k >= i; k--) {
                arr[k + 1] = arr[k];
            }
            arr[i] = x;
            print(arr, h);
            i++; 
            j++;
        }
    }
}
void split_merg(int arr[], int first, int last, int h) {
    if (first >= last) return;
    int m = (first + last) / 2;
    
    split_merg(arr, first, m, h);        
    split_merg(arr, m + 1, last, h);    
    merge_array(arr, first, m, last, h); 
}
void MergeSort(int arr[], int h) {
    if (h < 2) return; 
    split_merg(arr, 0, h - 1, h);
}

int main() {
    int arr[] = {101, 23, 57, 13, 25, 121, 87, 36, 13, 204, 111, 89, 59};
    int h = 13;
    print(arr, h);
    MergeSort(arr, h);
    print(arr, h);
}