#!/bin/bash

# Перебираем все папки, начинающиеся с "p_"
for dir in p_*; do
    # Проверяем, что это действительно папка
    if [ -d "$dir" ]; then
        # Переходим в папку
        cd "$dir"
        
        # Проверяем, существует ли файл main.c
        if [ -f "main.c" ]; then
            echo "Компилируем $dir/main.c..."
            # Компилируем main.c с помощью gcc
            gcc -o main main.c -lm
            
            # Проверяем, успешно ли прошла компиляция
            if [ $? -eq 0 ]; then
                echo "Компиляция $dir/main.c завершена успешно."
            else
                echo "Ошибка при компиляции $dir/main.c."
            fi
        else
            echo "Файл main.c не найден в папке $dir."
        fi
        
        # Возвращаемся на уровень выше
        cd ..
    fi
done