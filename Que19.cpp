//19. Merge two sorted arrays without using extra space
#include <stdio.h>

void mergeArrays(int a[], int b[], int n, int m) {
    
    // Traverse b[] starting from the last element
    for (int i = m - 1; i >= 0; i--) {
      
        // If b[i] is smaller than the largest element of a[]
        if (a[n - 1] > b[i]) {
          
            // Place b[i] in the correct position in a[], 
            // and move last element of a[] to b[]
            int last = a[n - 1];
            int j = n - 2;
            while (j >= 0 && a[j] > b[i]) {
                a[j + 1] = a[j];
                j--;
            }
            a[j + 1] = b[i];
            b[i] = last;
        }
    }
}

int main() {
    int a[] = {1, 5, 9, 10, 15, 20};
    int b[] = {2, 3, 8, 13};
    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);

    mergeArrays(a, b, n, m);
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    // printf("\n");
    for (int i = 0; i < m; i++)
        printf("%d ", b[i]);

    return 0;
}