#include <stdio.h>
long long max = -999999999999999;
int seq[100];
int len = 0;
void path(int arr[], int n, int index, long long current_product, int current_seq[], int current_len, int empty) {
    if (index >= n) {
        if (empty == 0 && current_product > max) {
            max = current_product;
            len = current_len;
            for (int i = 0; i < current_len; i++) {
                seq[i] = current_seq[i];
            }
        }
        return;
    }
    current_seq[current_len] = arr[index];
    long long next_product;
    
    if (empty == 1) {
        next_product = arr[index]; 
    } else {
        next_product = current_product * arr[index]; 
    }
    path(arr, n, index + 1, next_product, current_seq, current_len + 1, 0);
    path(arr, n, index + 1, current_product, current_seq, current_len, empty);
}

int main() {
    int arr[] = { -6, 4, -5, 8, -10, 0, 8 };
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Input { ");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(", ");
    }
    printf(" }\n");

    int current_seq[100];
    path(arr, n, 0, 1, current_seq, 0, 1);

    printf("Output: %lld\n", max);
    for (int i = 0; i < len; i++) {
        printf("%d", seq[i]);
        if (i < len - 1) printf(", ");
    }

    return 0;
}