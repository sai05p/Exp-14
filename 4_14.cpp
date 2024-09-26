# include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Eating " << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Barking " << endl;
    }
};

class Cat : public Animal {
public:
    void meow() {
        cout << "Meowing " << endl;
    }
};
int main() {
   
    Dog dog;
    dog.eat();   
    dog.bark();  

    Cat cat;
    cat.eat();   
    cat.meow();  

    return 0;
}