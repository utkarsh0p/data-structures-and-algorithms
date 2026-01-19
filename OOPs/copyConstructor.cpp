#include <iostream>
using namespace std;

class Teacher
{
public:
    string name;
    int salary;
    Teacher(string name, int salary)
    {
        this->name = name;
        this->salary = salary;
    }

    //we defining our own copy constructor
    Teacher(Teacher &obj){
        this->name = obj.name;
        this->salary = obj.salary;
    }
};

int main()
{
    Teacher t1("utkarsh", 55000);
    // copy constructor is used to copy properties of one object into another
    Teacher t2(t1);  //this time this is custorm copy constructor because we have made the custom in the obj
    // default copy constructor only when we do not give our own copy 
    cout << t2.salary;
}