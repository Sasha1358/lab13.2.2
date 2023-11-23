#include <iostream>
#include <cstdarg>
#include<Windows.h>

// Макроси для визначення констант
#define DIGIT_MATRIX_ROWS_MULTIPLIER 10
#define ALPHABET_MATRIX_COLS_DIVISOR 2

// Функція обробки введених значень
void processInput(int rows, char firstChar, int cols) {
    // Вивід розмірів матриці
    std::cout << "Розмір матриці: " << rows << " x " << cols << std::endl;

    // Вивід введеного цифрового значення
    std::cout << "Отримана цифра: " << rows << std::endl;

    // Вивід введеного символу
    std::cout << "Отриманий символ: " << firstChar << std::endl;

    // Вивід розрахованої кількості стовпців
    std::cout << "К-сть стовбців: " << static_cast<int>(firstChar) / ALPHABET_MATRIX_COLS_DIVISOR << std::endl;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int rows;
    char firstChar;

    // Введення кількості рядків
    std::cout << "К-сть рядків: ";
    std::cin >> rows;

    // Введення першого алфавітного символу
    std::cout << "Ввід першого алфавітного символу:";
    std::cin >> firstChar;

    // Валідація введених значень
    if (rows == 0) {
        std::cerr << "Помилка: к-сть рядків не може бути 0." << std::endl;
        return 1;
    }

    // Виклик функції для обробки введених значень 
    //Спочатку, символ firstChar перетворюється у відповідний ASCII-код,
    //використовуючи static_cast<int>. Таким чином, ми отримуємо числове представлення алфавітного символу.
    //ALPHABET_MATRIX_COLS_DIVISOR: Після цього отримане числове значення ділиться на значення 
    //ALPHABET_MATRIX_COLS_DIVISOR (яке у нашому випадку дорівнює 2).
    processInput(rows, firstChar, static_cast<int>(firstChar) / ALPHABET_MATRIX_COLS_DIVISOR);

    return 0;
}
