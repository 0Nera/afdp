#include <stdio.h>
#include <stdlib.h>

void rearrange_array(int arr[], int n) {
    int evenIndex = 0;
    int *temp = (int *) malloc(n * sizeof(int));

    // Перемещаем четные числа в начало массива
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            temp[evenIndex++] = arr[i];
        }
    }

    // Перемещаем нечетные числа в конец массива
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            temp[evenIndex++] = arr[i];
        }
    }

    // Копируем упорядоченный массив обратно в исходный массив
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }

    // Освобождаем память, выделенную для временного массива
    free(temp);
}

int main() {
    int n;
    printf("Введите количество элементов массива (1 <= n <= 100): ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Неверное количество элементов.\n");
        return 1;
    }

    int *arr = (int *) malloc(n * sizeof(int));
    printf("Введите элементы массива:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    rearrange_array(arr, n);

    printf("Массив после упорядочивания:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Освобождаем память, выделенную для массива
    free(arr);

    return 0;
}
