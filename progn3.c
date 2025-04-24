#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    const int n = 10;
    int a[n], count = 0, maxIndex = 0, sum = 0;

    srand(time(0));
    for (int i = 0; i < n; i++) {
        a[i] = -100 + rand() % 201; // [-100; 100]
        printf("a[%d] = %d\n", i, a[i]);
        if (a[i] > 5) count++;
        if (a[i] > a[maxIndex]) maxIndex = i;
    }

    for (int i = maxIndex + 1; i < n; i++) {
        sum += a[i];
    }

    printf("Кількість елементів більших за 5: %d\n", count);
    printf("Сума елементів після максимального: %d\n", sum);
    return 0;
}
