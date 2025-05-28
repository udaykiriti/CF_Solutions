#include <stdio.h>

int main() {
    int arr[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    int n, i;
    scanf("%d", &n);
    
    for (i = 0; i < 14; i++) {
        if (n % arr[i] == 0) {
            printf("YES\n");
            return 0;
        }
    }

    printf("NO\n");
    return 0;
}
