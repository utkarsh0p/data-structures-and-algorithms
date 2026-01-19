// ex- function overriding ( parant and the child both with same functions with different implementation )
//  he object which will call the function will override the another

/*Function overriding means:
Parent and Child have the same function, but Child gives its own implementation.
The function that runs depends on the object type at runtime.*/

//  one more example is virtual functions -> they are always defined in base class with keyword virtual and overriden in the base class

#include <iostream>
using namespace std;

class Animal
{
public:
    // virtual void sound()  <- this will be virtual function
    void sound()
    {
        cout << "Animal makes sound" << endl;
    }
};

class Dog : public Animal
{
public:
    void sound()
    {
        cout << "Dog barks" << endl;
    }
};

int main()
{
    Animal a;
    Dog d;
    d.sound();
}