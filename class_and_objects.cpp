#include <iostream>
using namespace std;

class animal
{
};

class Animal
{

private:
    int weight;

public:
    // property
    int age;
    string name;

    // behavioru / method
    void eat()
    {
        cout << "eating";
    }

    void setWeight(int a)
    {
        weight = a;
    }

    int getWeight()
    {
        return weight;
    }
};

int main()
{

    // object creation - static with stack memory
    Animal dog;
    dog.age = 10;

    cout << dog.age << endl;

    //to access private member we have to define getter and setter
    dog.setWeight(101);
    cout << dog.getWeight() << endl;

    dog.eat();

    // cout << "Size of empty class is : " << sizeof(animal) << endl;

    //  takes some extra memory (padding bytes) to adjust and align the data properly in memory so the CPU can access it faster.
    // cout << "Size of empty class is : " << sizeof(Animal) << endl;
}