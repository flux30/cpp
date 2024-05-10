#include <iostream>
using namespace std;
class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a generic sound." << endl;
    }
};
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks: Woof! Woof!" << endl;
    }
};
class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows: Meow! Meow!" << endl;
    }
};
int main() {
    Animal *animal1 = new Dog();
    Animal *animal2 = new Cat();
    animal1->sound();
    animal2->sound();
    delete animal1;
    delete animal2;
    return 0;
}