#include <iostream>
using namespace std;

class Animal
{

private:
    int weight;

public:
    // default constructuor
    Animal()
    {
        cout << "Constructor called:" << endl;
    }

    // parametrized constructor
    Animal(int age)
    {
        this->age = age;
        cout << "aage is :" << age << endl;
    }

    Animal(int age, string name)
    {
        this->age = age;
        this->name = name;
        cout << "aage is :" << age << endl;
        cout << "name is :" << name << endl;
    }

    // copy constructor for deep copy
    Animal(Animal &obj)
    {
        this->age = obj.age;
        cout << " insid copy constructuor" << endl;
    }

    // property
    int age;
    string name;

    // behavioru / method
    void eat()
    {
        cout << "eating";
    }

    void setWeight(int weight)
    {
        this->weight = weight;
    }

    int getWeight()
    {
        return weight;
    }
};

int main()
{
    // object creation - dyanmic with heap memmory
    Animal *sher = new Animal;

    (*sher).age = 20;
    (*sher).name = "Herooo";

    // alternative
    sher->age = 40;
    sher->name = "hero";

    sher->eat();

    Animal a(10);
    Animal *b = new Animal(100, "shalu");

    // object copy
    Animal c = a;
    // OR
    Animal animal(c);

    // Otherwise, it causes a memory leak (the memory remains occupied until the program ends).
    delete sher;
}