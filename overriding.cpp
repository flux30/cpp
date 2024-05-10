#include <iostream>
using namespace std;
class Animal {
public:
    virtual void makeSound() {
        cout << "Animal makes a generic sound." << endl;
    }
};
class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Dog barks: Woof! Woof!" << endl;
    }
};
class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Cat meows: Meow! Meow!" << endl;
    }
};
int main() {
    Animal* animal1 = new Dog();
    Animal* animal2 = new Cat();
    animal1->makeSound();
    animal2->makeSound();
    delete animal1;
    delete animal2;
    return 0;
}