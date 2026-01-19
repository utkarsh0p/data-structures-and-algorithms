// like constructor give the memory to the object same way destructor is responsible for clean the memory
// the problem is is only automatically cleans for the statically
// for the dynamically allocated we have to use delete ( delete ptr) the memory gets free not the pointer deleted
#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int *age;

    void getInfo()
    {
        cout << this->name;
        cout << endl;
        cout << *this->age;
    }

    // destructor
    ~Student()
    {
        cout << "destructor called";
        delete age; // freeing the dynamincally allocated one ( age was the dynamically allocated memory )
    }
};
int main()
{
    Student student1;
    student1.name = "utkarsh";
    student1.age = new int(54);
    student1.getInfo();
}