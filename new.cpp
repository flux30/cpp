#include <iostream>
using namespace std;
int main() {
    int* ptr = new int;
    if (ptr == nullptr) {
        cout << "Memory allocation failed." << endl;
        return 1;
    }
    *ptr = 10;
    cout << "Value stored in the allocated memory: " << *ptr << endl;
    delete ptr;
    return 0;
}