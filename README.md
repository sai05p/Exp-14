
# EXPERIMENT 14
# AIM
To study and implement inheritance

# THEORY
A key concept in object-oriented programming in C++ is inheritance, which enables a class to inherit properties and features from another class. This establishes a hierarchical link between classes and promotes reusing of code.

Key Concepts:

Base Class (Parent Class) : The class from which properties and methods are inherited. It is also called the parent or superclass.

Derived Class (Child Class) : The class that inherits the properties and methods from the base class. It can add new members or modify the inherited ones.

Access Specifiers in Inheritance:

Public Inheritance (: public):

Public members of the base class become public in the derived class.

Protected members remain protected.

Private members are inaccessible directly but can be accessed through public/protected functions.

Protected Inheritance (: protected):

Public and protected members of the base class become protected in the derived class.

Private Inheritance (: private):

Public and protected members of the base class become private in the derived class.

Types of Inheritance :

Single Inheritance

A derived class inherits from only one base class.

Multiple Inheritance

A derived class inherits from more than one base class.

Multilevel Inheritance

A class is derived from a class that is also derived from another class, forming a chain.

Hierarchical Inheritance

Multiple derived classes inherit from a single base class.

CODES:

```
# include <iostream>
# include <string>
using namespace std;
class Uni{
    public:
    string uni= "Symbiosis";
    void discipline(){
        cout << "Engineering" << endl;
    }
};
class Dep : public Uni{
    public:
    string dept= " Electronics & Telecommunication";
};
int main(){
    Dep u1;
    u1.discipline();
    cout<<u1.uni + " "+u1.dept ;
}
```
![image](https://github.com/user-attachments/assets/00668240-dbca-43b5-a5fb-eb0d1018bc91)


```
# include <iostream>
# include <string>
using namespace std;
// Parent CLass1 
class Vehicle {
    public:
    string company=" Ford";
    void type(){
        cout << "Mustang"<< endl;
    }
};
// Parent Class 2
class Specs{
    public:
    string mileage="8 kmpl";
    void colour(){
        cout<<"Grey"<<endl;
    }
};
// Child Class-1 (derived from parent- 1&2)
class Car: public Vehicle,public Specs{
    public:
    string seater = " 4 seater";
};
int main(){
    //multiple inheritance
    Car f2;
    f2.colour();
    cout<<f2.company<<" ";
    f2.type();
    cout<<"("<<f2.seater<<")"<<endl<<"MILEAGE:"<<f2.mileage<<endl;
}
```
![image](https://github.com/user-attachments/assets/45777ba1-b1b9-41ea-9f0b-8e99b3e8662a)

```


