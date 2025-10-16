#include <iostream>
using namespace std;

//*************INHERITANCE
class Animal{
    public:
        int age;
        string name;

    protected:
        int weight;

    private:
        int year;
      
};

class Dog : public Animal{

};



int main()
{
    Dog d1 ;
    //can access public prop.
    d1.age; 

    // cannot acces private prop single
    //they can only access by createing getter and setter
   
}