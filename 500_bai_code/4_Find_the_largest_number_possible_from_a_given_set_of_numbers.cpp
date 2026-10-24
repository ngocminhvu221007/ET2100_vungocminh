#include <stdio.h>

void String(int num, char str[], int *len) {
    if (num == 0) {
        str[0] = '0';
        str[1] = '\0';
        *len = 1;
        return;
    }
    int temp = num;
    int count = 0;
    while (temp > 0) {
        count++;
        temp /= 10;
    }
    *len = count;
    str[count] = '\0';
    temp = num;
    for (int i = count - 1; i >= 0; i--) {
        str[i] = (temp % 10) + '0';
        temp /= 10;
    }
}

int compare(char s1[], char s2[]) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            return s1[i] - s2[i];
        }
        i++;
    }
    return s1[i] - s2[i];
}

void concat(int num1, int num2, char str_out[]) {
    char s1[20], s2[20];
    int l1, l2;
    String(num1, s1, &l1);
    String(num2, s2, &l2);
    
    int idx = 0;
    for (int i = 0; i < l1; i++) {
        str_out[idx++] = s1[i];
    }
    for (int i = 0; i < l2; i++) {
        str_out[idx++] = s2[i];
    }
    str_out[idx] = '\0';
}

void sortLargestNumber(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            char ab[40], ba[40];
            concat(arr[i], arr[j], ab); 
            concat(arr[j], arr[i], ba); 
            if (compare(ba, ab) > 0) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void print(int arr[], int n) {
    printf("{ ");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(", ");
    }
    printf(" }\n");
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    print(arr, n);
    sortLargestNumber(arr, n);
    if (arr[0] == 0) {
        printf("0\n");
    } else {
        for (int i = 0; i < n; i++) {
            printf("%d", arr[i]);
        }
        printf("\n");
    }
    
    return 0;
}