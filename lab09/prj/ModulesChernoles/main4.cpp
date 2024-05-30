#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function for Problem 9.1: Tornado classification
string getTornadoCategory(int windSpeed, double& frequency) {
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

    cout << "Tornado Category: " << category << std::endl;
    cout << "Frequency of occurrence: " << frequency << "%" << std::endl;
}

// Function for Problem 9.2: Calculate daily average temperature
void calculateDailyAverageTemperature(const vector<double>& temperatures) {
    double sum = 0;
    for (double temp : temperatures) {
        sum += temp;
    }
    double average = sum / temperatures.size();

    double fahrenheitAverage = average * 9 / 5 + 32;

    cout << "Daily average temperature in Celsius: " << average << " °C" << endl;
    cout << "Daily average temperature in Fahrenheit: " << fahrenheitAverage << " °F" << endl;
}

// Function for Problem 9.3: Count number of binary zeros or ones
int countZerosOrOnes(int N) {
    int count = 0;
    if ((N & 1) == 0) { // Check if the last bit (D0) is 0
        while (N != 0) {
            if ((N & 1) == 0) // Check if the current bit is 0
                count++;
            N >>= 1; // Right shift the number to check the next bit
        }
    } else {
        while (N != 0) {
            if ((N & 1) == 1) // Check if the current bit is 1
                count++;
            N >>= 1; // Right shift the number to check the next bit
        }
    }
    return count;
}

// Main function where functions are called according to user input
int main() {
    char choice;
    srand(time(0)); // Initialize random number generator

    do {
        cout << "Select an option ('z' - s_calculation(), 'r' - Problem 9.1, 's' - Problem 9.2, 't' - Problem 9.3, 'q' - quit): ";
        cin >> choice;

        switch (choice) {
            case 'z':
                // Call s_calculation() function
                cout << "Calling s_calculation() function." << endl;
                break;
            case 'r':
                int windSpeed;
                cout << "Enter wind speed (km/h): ";
                cin >> windSpeed;
                classifyTornado(windSpeed);
                break;
            case 's': {
                vector<double> temperatures;
                cout << "Enter air temperature for each hour (00:00, 04:00, 8:00, 12:00, 16:00, 20:00):" << endl;
                for (int i = 0; i < 6; ++i) {
                    double temp;
                    cout << "Hour " << i * 4 << ":00: ";
                    cin >> temp;
                    temperatures.push_back(temp);
                }
                calculateDailyAverageTemperature(temperatures);
                break;
            }
            case 't': {
                int N;
                cout << "Enter a natural number N (from 0 to 65535): ";
                cin >> N;
                int result = countZerosOrOnes(N);
                cout << "Result: " << result << endl;
                break;
            }
            case 'q':
            case 'Q':
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "\a"; // Sound alert for incorrect input
                break;
        }

    } while (choice != 'q' && choice != 'Q');

    return 0;
}
