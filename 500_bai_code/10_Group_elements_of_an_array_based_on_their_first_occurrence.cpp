#include <stdio.h>
void groupElementsByFirstOccurrence(int arr[], int n) {
    int value[100]; 
    int frequency[100];       
    int count = 0; 

    for (int i = 0; i < n; i++) {
        int current = arr[i];
        int found_index = -1;

        for (int j = 0; j < count; j++) {
            if (value[j] == current) {
                found_index = j; 
                break;
            }
        }

        if (found_index == -1) {
            value[count] = current;
            frequency[count] = 1;
            count++;
        } 
        else {
            frequency[found_index]++;
        }
    }

    int index = 0;
    for (int i = 0; i < count; i++) {
        for (int k = 0; k < frequency[i]; k++) {
            arr[index++] = value[i];
        }
    }
}

int main() {
    int arr[] = { 5, 4, 5, 5, 3, 1, 2, 2, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Input:  { ");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(", ");
    }
    printf(" }\n");

    groupElementsByFirstOccurrence(arr, n);

    printf("Output: { ");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(", ");
    }
    printf(" }\n");

    return 0;
}