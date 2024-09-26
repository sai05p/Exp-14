# include <iostream>
using namespace std;
class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

class Mammal : public Animal {
public:
    void walk() {
        cout << "Mammal is walking." << endl;
    }
};
class Dog : public Mammal {
public:
    void bark() {
        cout << "Dog is barking." << endl;
    }
};
int main() {
    Dog f1;
    f1.eat();   
    f1.walk();  
    f1.bark();  
    return 0;
}