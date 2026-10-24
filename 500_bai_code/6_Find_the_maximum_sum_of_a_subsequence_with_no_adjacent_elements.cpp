#include <stdio.h>
int max_sum = -1;   
int seq[100]; 
int len = 0;   

void path(int arr[], int n, int index, int current_sum, int current_seq[], int current_len) {
    if (index >= n) {
        if (current_sum > max_sum) {
            max_sum = current_sum;       
            len = current_len;   
            for (int i = 0; i < current_len; i++) {
                seq[i] = current_seq[i];
            }
        }
        return; 
    }
    current_seq[current_len] = arr[index];
    path(arr, n, index + 2, current_sum + arr[index], current_seq, current_len + 1);
    path(arr, n, index + 1, current_sum, current_seq, current_len);
}

int main() {
    int arr[] = { 1, 2, 9, 4, 5, 0, 4, 11, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Input:  { ");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(", ");
    }
    printf(" }\n");
    int current_seq[100];
    path(arr, n, 0, 0, current_seq, 0);
    printf("Output: max sum %d\n", max_sum);
    for (int i = 0; i < len; i++) {
        printf("%d", seq[i]);
        if (i < len - 1) printf(", ");
    }

    return 0;
}