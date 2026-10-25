#include <stdio.h>
void decodeArray(int inp[], int m) {
    int n = 2;
    while (n * (n - 1) / 2 < m) {
        n++;
    }
    int A[100]; 
    if (n == 2) {
        A[0] = 1;           
        A[1] = inp[0] - 1;  
    } 
    else {
        int x = inp[0];     
        int y = inp[1];     
        int z = inp[n-1];   

        A[0] = (x + y - z) / 2;
        for (int i = 1; i < n; i++) {
            A[i] = inp[i - 1] - A[0];
        }
    }
    printf("Output: { ");
    for (int i = 0; i < n; i++) {
        printf("%d", A[i]);
        if (i < n - 1) printf(", ");
    }
    printf(" }\n\n");
}

int main() {
    int inp1[] = { 3, 4, 5, 5, 6, 7 };
    int m1 = sizeof(inp1) / sizeof(inp1[0]);
    printf("Input 1: { 3, 4, 5, 5, 6, 7 }\n");
    decodeArray(inp1, m1);

    int inp2[] = { 3, 4, 5, 6, 5, 6, 7, 7, 8, 9 };
    int m2 = sizeof(inp2) / sizeof(inp2[0]);
    printf("Input 2: { 3, 4, 5, 6, 5, 6, 7, 7, 8, 9 }\n");
    decodeArray(inp2, m2);

    int inp3[] = { 3 };
    int m3 = sizeof(inp3) / sizeof(inp3[0]);
    printf("Input 3: { 3 }\n");
    decodeArray(inp3, m3);

    return 0;
}