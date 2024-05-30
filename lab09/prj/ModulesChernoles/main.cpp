#include <iostream>
#include <string>

std::string getTornadoCategory(int windSpeed, double& frequency) {
    if (windSpeed < 64) {
        frequency = 0.0;  // Торнадо со скоростью менее 64 км/ч не классифицируются
        return "No tornado";
    } else if (windSpeed >= 64 && windSpeed <= 117) {
        frequency = 0.53;  // Частота F0
        return "F0";
    } else if (windSpeed >= 118 && windSpeed <= 180) {
        frequency = 0.31;  // Частота F1
        return "F1";
    } else if (windSpeed >= 181 && windSpeed <= 252) {
        frequency = 0.10;  // Частота F2
        return "F2";
    } else if (windSpeed >= 253 && windSpeed <= 332) {
        frequency = 0.04;  // Частота F3
        return "F3";
    } else if (windSpeed >= 333 && windSpeed <= 419) {
        frequency = 0.01;  // Частота F4
        return "F4";
    } else if (windSpeed >= 420) {
        frequency = 0.003; // Частота F5
        return "F5";
    } else {
        frequency = 0.0;  // Неопределенная частота для некорректных данных
        return "Undefined";
    }
}

int main() {
    int windSpeed;
    std::cout << "Enter wind speed during tornado (km/h): ";
    std::cin >> windSpeed;

    double frequency;
    std::string category = getTornadoCategory(windSpeed, frequency);

    if (category == "No tornado") {
        std::cout << "The given wind speed does not qualify as a tornado." << std::endl;
    } else {
        std::cout << "Tornado Category: " << category << std::endl;
        std::cout << "Frequency of occurrence: " << frequency << "%" << std::endl;
    }

    return 0;
}
