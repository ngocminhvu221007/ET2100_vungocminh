#include <stdio.h>
int main(){
    int n;
    scanf ("%d", &n);
    int A[n];
    for (int i=0; i<n; i++){
        scanf ("%d", &A[i]);
    }
    for (int i=0; i<n; i++){
        printf ("%d ", A[i]);
    }
    printf ("\n");
    int temp;
    for (int i=1; i<n;i++){
        temp=A[i];
        int j=i;
        while (j>0 && temp <A[j-1]) {
            A[j]=A[j-1];
            j--;
        }
        A[j]=temp;
        for (int k=0; k<n; k++) {
        printf ("%d ", A[k]);
    }
    printf ("\n");
    }
}