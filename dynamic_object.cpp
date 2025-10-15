#include <iostream>
using namespace std;



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
    //object creation - dyanmic with heap memmory
    

    
}