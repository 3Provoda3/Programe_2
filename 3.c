#include <stdio.h>
#include <math.h>

int main() {
    // Задаємо значення змінних
    int a, y;
    printf("Введіть значення змінної 'a': ");
    scanf("%d", &a);
    printf("Введіть значення змінної 'y': ");
    scanf("%d", &y);
    
    // Обчислюємо значення функції
    float x = 0;
    if (pow(y, 2)-2*a >=0) {
        x = a * sqrt(pow(y, 2) - 2 * a);
    } else {
        printf("Під коренем не може бути від'ємне число\n");
        return 1;
    }
    // Виводимо значення функції на екран
    printf("Значення функції: %.2f\n", x);

    return 0;
}
