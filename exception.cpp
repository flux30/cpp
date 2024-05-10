#include <iostream>
using namespace std;
int main() {
    try {
        int numerator, denominator;
        cout << "Enter numerator: ";
        cin >> numerator;
        cout << "Enter denominator: ";
        cin >> denominator;
        if (denominator == 0) {
            throw "Division by zero error.";
        }
        double result = static_cast<double>(numerator) / denominator;
        cout << "Result of division: " << result << endl;
    }
    catch (const char* msg) {
        cout << "Exception caught: " << msg << endl;
    }
    catch (...) {
        cout << "An unknown exception occurred." << endl;
    }
    return 0;
}