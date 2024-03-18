#include <iostream>
#include <cmath>

int main() {
    double a, b;
    
    // Ввод значений a и b
    std::cout << "Введите значение a: ";
    std::cin >> a;
    std::cout << "Введите значение b: ";
    std::cin >> b;

    // Вычисление модуля разности |b-5|
    double mod_b_minus_5 = std::abs(b - 5);

    // Проверка условия неравенства и вывод результата
    if (a + 7 < mod_b_minus_5) {
        std::cout << "1" << std::endl;
    } else {
        std::cout << "0" << std::endl;
    }
    
    std::cout << "Чернолєс Кирило (С)" << std::endl;

    
    return 0;
}