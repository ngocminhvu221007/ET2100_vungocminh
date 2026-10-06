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
    int min;
    int temp;
    for (int i=0; i<n-1; i++){
        min =i;
        for (int j=i+1; j<n; j++) {
            if (A[j]<A[min]){
                min=j;
            }
        }
        temp=A[i];
        A[i]=A[min];
        A[min]=temp;
    for (int k=0; k<n; k++) {
        printf ("%d ", A[k]);
    }
    printf ("\n");
    }
    return 0;
}