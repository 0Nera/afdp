#include <stdio.h>
#include <math.h>

int main() {
    float x, y; // координаты точки
    float R;    // радиус окружности
    float a;    // сторона квадрата

    // Ввод параметров
    printf("Введите радиус окружности R: ");
    scanf("%f", &R);
    printf("Введите сторону квадрата a: ");
    scanf("%f", &a);
    printf("Введите координаты точки (x, y): ");
    scanf("%f %f", &x, &y);

    // Проверка попадания в окружность
    float distance = sqrt(x * x + y * y);
    if (distance <= R) {
        // Проверка попадания в квадрат
        if (fabs(x) <= a / 2 && fabs(y) <= a / 2) {
            printf("Точка попадает в закрашенные области.\n");
        } else {
            printf("Точка не попадает в закрашенные области.\n");
        }
    } else {
        printf("Точка не попадает в закрашенные области.\n");
    }

    return 0;
}