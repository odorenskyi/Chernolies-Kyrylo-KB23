#include <cmath>
#include <iostream>

using namespace std;

int main() {
  double x, z;

  // Введення значень x та z
  cout << "Введіть значення x: ";
  cin >> x;
  cout << "Введіть значення z: ";
  cin >> z;

  // Обчислення S
  double S = (sqrt(1 + x) - 3 * cos(x)) / (log(pow(x, 2)) + 3 * sin(M_PI * x)) + pow((sqrt(pow(z, 3)) + 2), 2);

  // Виведення результату
  cout << "S = " << S << endl;

  std::cout << "Чернолєс Кирило (c) | Академ-група:КБ-23 | ЦНТУ" << std::endl; 

  return 0;
}