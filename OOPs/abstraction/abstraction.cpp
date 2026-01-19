/*Abstraction is used to hide implementation details
and show only what is necessary to the user.

An abstract class is a class that is mainly used
for other classes to inherit and implement.

abstract class ( we make virtual functions to make it abstract automatically ) is only blueprint for other class
-they cannot be instantiated

*/
#include <iostream>
using namespace std;

int main(){
    
}

class Shape
{
public:
    virtual void draw() = 0;  // abstract function
};
//  now Shape circle; is not available we can only make the other classes to inherit it

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing Circle";
    }
};
