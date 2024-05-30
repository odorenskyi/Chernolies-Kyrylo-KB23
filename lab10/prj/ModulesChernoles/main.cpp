#include <iostream>
#include <fstream>
#include <bitset>
#include <cmath>
#include <sstream>
#include <cstring>

int vowelsCountInFile(string outputFileName, string ukrWord)
{
    ofstream outputFile(outputFileName, ios::app);
    string vowels[10] = { "а", "е", "є", "и", "і", "ї", "о", "у", "ю", "я" };
    int vowelsCount = 0;
    size_t foundVowel;

    for (int i = 0; i < 10; i++) {
        foundVowel = ukrWord.find(vowels[i]);
        if (foundVowel != string::npos) {
            vowelsCount++;
        }
    }
    outputFile << "Кількість голосних літер з вхідного файлу: " << vowelsCount << endl << endl;
    outputFile.close();
    return vowelsCount;
}

bool findWordInPoem(string outputFileName, string ukrWord)
{
    ofstream outputFile(outputFileName, ios::app);
    string poemVI = { "до щастя не пускає лінощів орава.\n"
                      "у чім воно - ніхто не знає до пуття.\n"
                      "навчитись радісно робити кожну справу\n"
                      "найперше правило щасливого життя\n" };
    size_t foundWord;

    foundWord = poemVI.find(ukrWord);
    if (foundWord != string::npos) {
        outputFile << "Знайдено слово \"" << ukrWord << "\"" << endl << endl;
        outputFile.close();
        return true;
    }
    outputFile << "Cлово \"" << ukrWord << "\" - не знайдено" << endl << endl;
    outputFile.close();
    return false;
}

int consonantsCountInFile(string inputFileName, string ukrWord)
{
    ofstream inputTxtFile(inputFileName, ios::app);
    string vowels[10] = { "а", "е", "є", "и", "і", "ї", "о", "у", "ю", "я" };
    size_t foundConsonants;

    for (int i = 0; i < 10; i++) {
        foundConsonants = ukrWord.find(vowels[i]);
        if (foundConsonants != string::npos) {
            ukrWord.erase(foundConsonants, vowels[i].length());
        }
    }
    inputTxtFile << "Кількість приголосних літер з вхідного файлу: " << ukrWord.length() / 2 << endl << endl;
    inputTxtFile.close();
    return ukrWord.length() / 2;
}

bool timestampInFile(string inputFileName)
{
    ofstream inputFile(inputFileName, ios::app);
    time_t rawtime;
    time(&rawtime);
    inputFile << "Дата та час дозапису інформаціїї: " << ctime(&rawtime) << endl << endl;
    inputFile.close();
    return true;
}

// Предварительное объявление функции s_calculation
double s_calculation(float x, float y, float z);

double sCalculationResInFile(const string& outputFileName, float x, float y, float z) {
    // Вычисляем результат функции
    double result = s_calculation(x, y, z);
    
    // Открытие файла для записи с добавлением данных в конец файла
    ofstream outputFile(outputFileName, ios::app);
    
    // Проверка успешности открытия файла
    if (!outputFile) {
        cerr << "Ошибка открытия файла: " << outputFileName << endl;
        return -1.0; // Возвращаемое значение в случае ошибки
    }
    
    // Запись результата в файл
    outputFile << "Результат выполнения s_calculation: " << result << endl << endl;
    outputFile.close();
    
    // Возвращение результата
    return result;
}

bool decimalToBinary(string outputFileName, unsigned int number)
{
    if (number <= 0) {
        return false;
    }
    ofstream outputFile(outputFileName, ios::app);
    int binaryCels[32];
    int i;
    unsigned int convertedNum = number;

    for(i = 0; convertedNum > 0; i++) {
        binaryCels[i] = convertedNum % 2;
        convertedNum = convertedNum / 2;
    }
    outputFile << "Двійкове представлення числа " << number << " : ";
    for(i = i - 1; i >= 0; i--) {
        outputFile << binaryCels[i];
    }
    outputFile << endl << endl;
    outputFile.close();
    return true;
}

bool authorInfo(string outputFileName)
{
    ofstream outputFile(outputFileName, ios::out);
	outputFile << "====================================================================" << endl
               << " Виконавець:         Чернолєс Кирило Сергійович" << endl
               << " Рік розробки:       2023" << endl
               << " Місто/Країна:       Кропивницький/Україна" << endl
               << " ВНЗ:                Центральний Національний Технічний Університет" << endl
               << "====================================================================" << endl << endl;
    outputFile.close();
    return true;
}