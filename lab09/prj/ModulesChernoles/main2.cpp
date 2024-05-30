#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

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

int main() {
    vector<double> temperatures;
    cout << "Enter air temperature for each hour (00:00, 04:00, 8:00, 12:00, 16:00, 20:00):" << endl;
    for (int i = 0; i < 6; ++i) {
        double temp;
        cout << "Hour " << i * 4 << ":00: ";
        cin >> temp;
        temperatures.push_back(temp);
    }
    calculateDailyAverageTemperature(temperatures);
}
