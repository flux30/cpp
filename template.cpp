#include <iostream>
using namespace std;
template <class T>
class Pair {
private:
    T first;
    T second;
public:
    Pair(T f, T s) : first(f), second(s) {}
    T getFirst() const {
        return first;
    }
    T getSecond() const {
        return second;
    }
    void display() const {
        cout << "(" << first << ", " << second << ")" << endl;
    }
};
int main() {
    Pair<int> intPair(10, 20);
    Pair<float> floatPair(3.14f, 2.718f);
    Pair<char> charPair('A', 'B');
    cout << "Integer Pair: ";
    intPair.display();
    cout << "Float Pair: ";
    floatPair.display();
    cout << "Character Pair: ";
    charPair.display();
    return 0;
}