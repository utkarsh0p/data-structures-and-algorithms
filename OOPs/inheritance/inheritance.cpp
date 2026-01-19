// in inheritace the properties of parent class is inherited by child class

#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
    string name;
    string habitat;

    // Constructor of Animal
    Animal(string name, string habitat)
    {
        this->name = name;
        this->habitat = habitat;
    }
};

class Fish : public Animal
{
public:
    string color; //giving extra thing to the object whatever we like
    // Constructor of Fish calling Animal's constructor
    Fish(string name, string habitat, string color) : Animal(name, habitat)
    {
        this->color = color;
    }

    void getInfo()
    {
        cout << this->name << endl;
        cout << this->habitat << endl;
        cout << this->color;
    }
};

int main()
{
    Animal animal("cow", "forest");

    Fish fish("whale", "ocean", "black");
    fish.getInfo();
}

// check about the modes of inheritance yourself ( what would be base class and what would be inherited derived class)
//public
//private
//protected


//types of inheritace 
//multilevel  parent -> child -> grandchild
//multiple     parent + parent   =  child
//heirarical  parent1 -> child1 and also parent1-> child2
//hybrid inheritache ( anyone inheriting from anyone )(basically this is a mixup of all the inheritace)

// here is how we write the multiple
// class TA : public class1, public class2{

// }
