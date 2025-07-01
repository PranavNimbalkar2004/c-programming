#include <stdio.h>
#include <limits.h>  
int main() {
    int a[100], n, i;
    int min1 = INT_MAX, min2 = INT_MAX;

    printf("Enter a No = ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++) {
        if(a[i] < min1) {
            min2 = min1;
            min1 = a[i];
        } else if(a[i] > min1 && a[i] < min2) {
            min2 = a[i];
        }
    }

    if(min2 == INT_MAX)
        printf("No second minimum element found (all elements might be the same).\n");
    else
        printf("The second min is %d\n", min2);

    return 0;
}