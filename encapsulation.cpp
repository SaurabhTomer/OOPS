#include <iostream>
using namespace std;

//*************ENCAPSULATION
class Animal{
    private:
        int age;
        string name;

    public:
        void eat(){
            cout << "eat";
        }

        //getter for age
        int getAge(){
            return this->age;
        }

        //setter or age
        int setAge(int umar){
            this->age = umar;
        }
};

int main()
{

   
}