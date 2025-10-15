#include <iostream>
using namespace std;

class animal
{
};

class Animal
{
public:
    // property
    int age;
    string name;

    // behavioru / method
    void eat()
    {

    }
};

int main()
{

    //object creation
    Animal dog;
    cout << dog.age;









    // cout << "Size of empty class is : " << sizeof(animal) << endl;

    //  takes some extra memory (padding bytes) to adjust and align the data properly in memory so the CPU can access it faster.
    // cout << "Size of empty class is : " << sizeof(Animal) << endl;
}