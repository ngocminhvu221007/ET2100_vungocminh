#include <stdio.h>
void find_pair (int arr[], int n, int target) {
    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            if (arr[i]+arr[j]==target) {
                printf ("Pair found (%d %d)\n", arr[i], arr[j]);
            }
        }
    }
    printf ("Pair not found\n");
}
int main(){
    int n;
    scanf ("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++) {
        scanf ("%d", &arr[i]);
    }
    int target;
    scanf ("%d", &target);
    find_pair (arr, n,target);
    return 0;
}