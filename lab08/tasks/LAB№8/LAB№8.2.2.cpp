#include <iostream>
#include <cmath>

int main() {
    double a, b;

    // Введення значень a та b
    std::cout << "Введіть значення a: ";
    std::cin >> a;
    std::cout << "Введіть значення b: ";
    std::cin >> b;

    // Обчислення модуля різниці |b-5|
    double mod_b_minus_5 = std::abs(b - 5);

    // Перевірка умови нерівності та вивід результату
    if (a + 7 < mod_b_minus_5) {
        std::cout << "1" << std::endl;
    } else {
        std::cout << "0" << std::endl;
    }
    
    std::cout << "Чернолєс Кирило (c) | Академ-група:КБ-23 | ЦНТУ" << std::endl;

    
    return 0;
}
