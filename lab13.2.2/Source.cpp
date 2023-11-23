#include <iostream>
#include <cstdarg>
#include<Windows.h>

// ������� ��� ���������� ��������
#define DIGIT_MATRIX_ROWS_MULTIPLIER 10
#define ALPHABET_MATRIX_COLS_DIVISOR 2

// ������� ������� �������� �������
void processInput(int rows, char firstChar, int cols) {
    // ���� ������ �������
    std::cout << "����� �������: " << rows << " x " << cols << std::endl;

    // ���� ��������� ��������� ��������
    std::cout << "�������� �����: " << rows << std::endl;

    // ���� ��������� �������
    std::cout << "��������� ������: " << firstChar << std::endl;

    // ���� ����������� ������� ��������
    std::cout << "�-��� ��������: " << static_cast<int>(firstChar) / ALPHABET_MATRIX_COLS_DIVISOR << std::endl;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int rows;
    char firstChar;

    // �������� ������� �����
    std::cout << "�-��� �����: ";
    std::cin >> rows;

    // �������� ������� ���������� �������
    std::cout << "��� ������� ���������� �������:";
    std::cin >> firstChar;

    // �������� �������� �������
    if (rows == 0) {
        std::cerr << "�������: �-��� ����� �� ���� ���� 0." << std::endl;
        return 1;
    }

    // ������ ������� ��� ������� �������� ������� 
    //��������, ������ firstChar �������������� � ��������� ASCII-���,
    //�������������� static_cast<int>. ����� �����, �� �������� ������� ������������� ���������� �������.
    //ALPHABET_MATRIX_COLS_DIVISOR: ϳ��� ����� �������� ������� �������� ������� �� �������� 
    //ALPHABET_MATRIX_COLS_DIVISOR (��� � ������ ������� ������� 2).
    processInput(rows, firstChar, static_cast<int>(firstChar) / ALPHABET_MATRIX_COLS_DIVISOR);

    return 0;
}
