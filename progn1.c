#include <stdio.h>

int main() {
    const int n = 10;
    int a[n];
    int sum = 0;

    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
        if (a[i] % 5 == 0)
            sum += a[i];
    }

    printf("Сума елементів, кратних 5: %d\n", sum);
    return 0;
}
