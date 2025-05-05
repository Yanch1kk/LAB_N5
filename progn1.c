#include <stdio.h>

int main() {
    int choice;
    const int maxSize = 100;
    int a[maxSize];
    int n;

    do {
        // Меню
        printf("\n~~nihao~~\n");
        printf("1. Обчислити суму елементів, кратних 5\n");
        printf("0. Вихід з програми\n");
        printf("Ваш вибір: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Введення кількості елементів масиву
                printf("Введіть кількість елементів масиву: ");
                scanf("%d", &n);

                // Перевірка розміру
                if (n <= 0 || n > maxSize) {
                    printf("Неправильна кількість елементів!\n");
                    break;
                }

                    // Введення елементів
                    for (int i = 0; i < n; i++) {
                        printf("a[%d] = ", i);
                        scanf("%d", &a[i]);
                    }

                // Обчислення суми кратних 5
                int sum = 0;
                for (int i = 0; i < n; i++) {
                    if (a[i] % 5 == 0) {
                        sum += a[i];
                    }
                }

                printf("Сума елементів, кратних 5: %d\n", sum);
                break;

            case 0:
                printf("Вихід з програми...\n");
                break;

            default:
                printf("Невірний вибір! Спробуйте ще раз.\n");
        }

    } while (choice != 0);

    return 0;
}
