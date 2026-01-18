#include <iostream>
using namespace std;
class Teacher
{
public:
    //teacher is the constructuctor ( if there are multiple constructor and each have different params we can say it as method overloading)
    Teacher(string name)
    {
        this->name = name; // this is the pointer pointing to the current object
        // this->name is same as (*this).name
    }
    string name;
    string department;
};
int main()
{
    Teacher objTeacher1("utkarsh");
    cout << objTeacher1.name;
}