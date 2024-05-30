#ifndef MODULESCHERNOLES_H_INCLUDED
#define MODULESCHERNOLES_H_INCLUDED

using namespace std;

float s_calculation(float x, float y, float z);

bool authorInfo(string outputFileName);
int vowelsCountInFile(string outputFileName, string ukrWord);
bool findWordInPoem(string outputFileName, string ukrWord);
int consonantsCountInFile(string inputFileName, string ukrWord);
bool timestampInFile(string inputFileName);
double sCalculationResInFile(string outputFileName, float x, float y, float z);
bool decimalToBinary(string outputFileName, unsigned int number);

#endif // MODULESCHERNOLES_H_INCLUDED
