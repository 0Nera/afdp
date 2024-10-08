# Практическая работа №1: Ветвящиеся вычислительные процессы

## Постановка задачи

Определить, попадает ли точка с координатами `(x, y)` в закрашенные области, образованные окружностью и квадратом.

### Параметры областей:
- **Окружность**: Радиус `R`, центр в начале координат `(0, 0)`.
- **Квадрат**: Сторона `a`, центр в начале координат `(0, 0)`, стороны параллельны осям координат.

## Решение

Программа на языке Си проверяет, попадает ли точка с координатами `(x, y)` в закрашенные области, образованные окружностью и квадратом. Точка попадает в закрашенные области, если она:
1. Находится внутри окружности (т.е. расстояние от точки до центра окружности меньше или равно радиусу).
2. Находится внутри квадрата (т.е. координаты точки лежат в пределах половины стороны квадрата от центра).

## Исходный код

```c
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
```

## Описание программы

1. **Ввод параметров**: Программа запрашивает у пользователя радиус окружности `R`, сторону квадрата `a` и координаты точки `(x, y)`.
2. **Проверка попадания в окружность**: Рассчитывается расстояние от точки `(x, y)` до центра окружности `(0, 0)` с помощью формулы `sqrt(x^2 + y^2)`. Если это расстояние меньше или равно радиусу `R`, то точка находится внутри окружности.
3. **Проверка попадания в квадрат**: Проверяется, лежат ли координаты точки `(x, y)` в пределах половины стороны квадрата от центра. Если `|x| <= a/2` и `|y| <= a/2`, то точка находится внутри квадрата.
4. **Вывод результата**: Если точка попадает и в окружность, и в квадрат, программа выводит сообщение о том, что точка попадает в закрашенные области. В противном случае выводится сообщение о том, что точка не попадает в закрашенные области.

## Как использовать

1. Скомпилируйте программу с помощью компилятора Си (например, `gcc`):
   ```bash
   gcc -o main main.c -lm
   ```
2. Запустите скомпилированную программу:
   ```bash
   ./main
   ```
3. Следуйте инструкциям на экране, чтобы ввести параметры и координаты точки.

## Пример работы программы

```
Введите радиус окружности R: 5
Введите сторону квадрата a: 4
Введите координаты точки (x, y): 2 2
Точка попадает в закрашенные области.
```

## Требования

- Компилятор Си (например, `gcc`).
- Библиотека `math.h` для использования функций `sqrt` и `fabs`.

## Автор

Арен Елчинян Артурович

## Лицензия

Этот проект лицензирован по [лицензии MIT](../LICENSE).