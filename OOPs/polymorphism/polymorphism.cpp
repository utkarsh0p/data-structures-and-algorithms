// polymorphism is basically the abiliy of the object to act differently on the basis of the different situations
//here is contructor overloading which is the example of the polymorphism
#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int age;
    Student(string name, int age)
    {
        this->name = name;
        this->age = age;
        cout << endl
             << "the constructor with the age and name parameter is called";
    }

    Student(string name)
    {
        this->name = name;
        cout << endl
             << "the constructor with the name only parameter called";
    }

    void getInfo()
    {
        cout << this->name << endl;
        cout << this->age;
    }
};

int main()
{
    Student student1("utkarsh");
    student1.getInfo();
}


//there are two types 
//runtime polymorphism 
//compiletime polymorphism // costructor overloading is compiletime