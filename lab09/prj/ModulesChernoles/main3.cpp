#include <iostream>
#include <bitset>

using namespace std;

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

int main() {
    int N;
    cout << "Enter a natural number N (from 0 to 65535): ";
    cin >> N;
    int result = countZerosOrOnes(N);
    cout << "Result: " << result << endl;
}