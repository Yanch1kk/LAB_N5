#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    const int n = 10;
    int a[n];
    int choice;
    int count, maxIndex, sum;

    do {
        printf("\n=== МЕНЮ ===\n");
        printf("1 - Завдання А: Ввести масив з клавіатури\n");
        printf("2 - Завдання Б: Заповнити масив випадковими числами [-100; 100]\n");
        printf("0 - Вийти з програми\n");
        printf("Ваш вибір: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // === Завдання А ===
                printf("\nВведіть %d цілих чисел:\n", n);
                for (int i = 0; i < n; i++) {
                    printf("a[%d] = ", i);
                    scanf("%d", &a[i]);
                }

                // Обчислення
                count = 0;
                maxIndex = 0;
                sum = 0;
                for (int i = 0; i < n; i++) {
                    if (a[i] > 5) count++;
                    if (a[i] > a[maxIndex]) maxIndex = i;
                }
                for (int i = maxIndex + 1; i < n; i++) {
                    sum += a[i];
                }

                printf("Кількість елементів більших за 5: %d\n", count);
                printf("Сума елементів після максимального: %d\n", sum);
                break;

            case 2:
                // === Завдання Б ===
                srand(time(0));
                printf("\nМасив, заповнений випадковими числами:\n");
                for (int i = 0; i < n; i++) {
                    a[i] = -100 + rand() % 201; // [-100; 100]
                    printf("a[%d] = %d\n", i, a[i]);
                }

                // Обчислення
                count = 0;
                maxIndex = 0;
                sum = 0;
                for (int i = 0; i < n; i++) {
                    if (a[i] > 5) count++;
                    if (a[i] > a[maxIndex]) maxIndex = i;
                }
                for (int i = maxIndex + 1; i < n; i++) {
                    sum += a[i];
                }

                printf("Кількість елементів більших за 5: %d\n", count);
                printf("Сума елементів після максимального: %d\n", sum);
                break;

            case 0:
                printf("Вихід з програми.\n");
                break;

            default:
                printf("Невірний вибір! Спробуйте ще раз.\n");
        }

    } while (choice != 0);

    return 0;
}
