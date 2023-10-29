// Белокрылов Александр (БИСО-01-23) Вариант 1

#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string>
#include <sstream>
using namespace std;


void function(int number) {
    printf("Введите Фирму %d  Количество продуктов %d   годовой объём продаж %d    Часть рынка %d\n", number, number, number, number);
}

void line(int width) {
    for (int i = 0; i < width - 1; i++) {
        printf("-");
    }
}

template <typename T>
int size(T number) {
    stringstream strm1;
    strm1 << number;
    string intStr;
    strm1 >> intStr;
    return intStr.size();
}

int main() {
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int width = 85; // Длина таблицы

    // названия компаний
    char corp1[20], corp2[20], corp3[20];

    // количество продуктов
    int corp1_count, corp2_count, corp3_count;

    // объём продаж
    unsigned long corp1_money, corp2_money, corp3_money;

    // часть рынка
    float corp1_part, corp2_part, corp3_part;

    // описания
    string description_1 = "Фирмы - производители СКБД";
    string description_2 = "Примечание: по данным Gartner Group за 1999г";

    // Ввод первой фирмы
    function(1);
    scanf_s("%s %d %lu %f", corp1, sizeof(corp1), &corp1_count, &corp1_money, &corp1_part);

    // Ввод второй фирмы
    function(2);
    scanf_s("%s %d %lu %f", corp2, sizeof(corp2), &corp2_count, &corp2_money, &corp2_part);

    // Ввод третьей фирмы
    function(3);
    scanf_s("%s %d %lu %f", corp3, sizeof(corp3), &corp3_count, &corp3_money, &corp3_part);

    // Рисуем таблицу
    printf("+");
    line(width);
    printf("+\n");

    // Первая строка "Фирмы - производители СКБД"
    printf("| %s", description_1.c_str());
    for (int i = 0; i < width - description_1.size() - 2; i++) {
        printf(" ");
    }
    printf("|\n");

    // Разделение между строками
    printf("|");
    line(width);
    printf("|\n");

    // Вторая строка
    printf("| Фирма     | Количество продуктов     | Годовой объём продажи     | Часть рынка     |\n");

    // Разделение
    printf("+");
    line(width);
    printf("+\n");

    // Вывод данных первой фирмы
    printf("| %s", corp1);
    for (int i = 0; i < 10 - strlen(corp1); i++) {
        printf(" ");
    }

    printf("| %d", corp1_count);
    for (int i = 0; i < 25 - size(corp1_count); i++) {
        printf(" ");
    }
    printf("| %lu", corp1_money);
    for (int i = 0; i < 26 - size(corp1_money); i++) {
        printf(" ");
    }
    printf("| %.2f", corp1_part);
    for (int i = 0; i < 16 - size(corp1_part); i++) {
        printf(" ");
    }
    printf("|\n");

    // Вывод данных второй фирмы
    printf("|");
    line(width);
    printf("|\n");

    printf("| %s", corp2);
    for (int i = 0; i < 10 - strlen(corp2); i++) {
        printf(" ");
    }

    printf("| %d", corp2_count);
    for (int i = 0; i < 25 - size(corp2_count); i++) {
        printf(" ");
    }
    printf("| %lu", corp2_money);
    for (int i = 0; i < 26 - size(corp2_money); i++) {
        printf(" ");
    }
    printf("| %.2f", corp2_part);
    for (int i = 0; i < 16 - size(corp2_part); i++) {
        printf(" ");
    }
    printf("|\n");

    // Вывод данных третьей фирмы
    printf("|");
    line(width);
    printf("|\n");

    printf("| %s", corp3);
    for (int i = 0; i < 10 - strlen(corp3); i++) {
        printf(" ");
    }

    printf("| %d", corp3_count);
    for (int i = 0; i < 25 - size(corp3_count); i++) {
        printf(" ");
    }
    printf("| %lu", corp3_money);
    for (int i = 0; i < 26 - size(corp3_money); i++) {
        printf(" ");
    }
    printf("| %.2f", corp3_part);
    for (int i = 0; i < 16 - size(corp3_part); i++) {
        printf(" ");
    }
    printf("|\n");

    // Примечание
    printf("+");
    line(width);
    printf("+\n");
    printf("| %s", description_2.c_str());
    for (int i = 0; i < width - description_2.size() - 2; i++) {
        printf(" ");
    }
    printf("|\n");

    // Завершение таблицы
    printf("+");
    line(width);
    printf("+\n");

    return 0;
}
