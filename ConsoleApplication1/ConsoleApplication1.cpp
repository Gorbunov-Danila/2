﻿#include <iostream>
int main()
{
    setlocale(LC_ALL, "Russian");
    int sum = 0;
    for (int i = 1; i <= 178; i++) {
        sum += i;
        std::cout << "Сумма чисел от 1 до " << i << ": " << sum << std::endl;
    }
    return 0;
}