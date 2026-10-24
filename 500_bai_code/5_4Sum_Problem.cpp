#include <stdio.h>
void sum(int arr[], int n, int target) {
    int found = 0;
    for (int i = 0; i < n - 3; i++) {
        for (int j = i + 1; j < n - 2; j++) {
            for (int k = j + 1; k < n - 1; k++) {
                for (int h = k + 1; h < n; h++) {
                    if (arr[i] + arr[j] + arr[k] + arr[h] == target) {
                        printf("(%d, %d, %d, %d)\n", arr[i], arr[j], arr[k], arr[h]);
                        found = 1;
                    }
                    
                }
            }
        }
    }

    if (!found) {
        printf("Not found\n");
    }
}

int main() {
    int n; int target;
    scanf ("%d %d", &n, &target);
    int arr[n];
    for (int i=0; i<n; i++){
        scanf ("%d", &arr[i]);
    }
    sum(arr, n, target);
    return 0;
}