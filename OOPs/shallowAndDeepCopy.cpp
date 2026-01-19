#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int *cgpaPtr;
    Student(string name, int cgpa)
    {
        this->name = name;
        cgpaPtr = new int;
        *cgpaPtr = cgpa;
    }

    Student(Student &obj)
    {
        this->name = obj.name;
        // this->cgpaPtr = obj.cgpaPtr;// this is shallow copy
        *this->cgpaPtr = *obj.cgpaPtr; // this is deep copy
    }

    void getInfo()
    {
        cout << this->name << endl;
        cout << *cgpaPtr;
    }
};

int main()
{
    Student student1("utkarsh", 45);
    Student student2(student1);
    *student2.cgpaPtr = 3;
    student1.getInfo(); // the cgpaPtr of the student1 is also chaged which is cgpa is now 3 even though we though of making it only for the student2
}