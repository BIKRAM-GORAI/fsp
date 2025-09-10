#include <iostream>
using namespace std;

class AgeValidation
{
private:
    string name;
    int age;

public:
    string getName()
    {
        return this->name;
    }
    void setName(string name)
    {
        this->name = name;
    }
    int getAge()
    {
        return this->age;
    }
    void setAge(int age)
    {
        if (age > 0 && age < 90)
        {
            this->age = age;
        }
        else
        {
            cout << "invalid age" << endl;
            this->age = 18;
        }
    }
    AgeValidation *getObject()
    {
        return this;
    }
};

int main()
{
    AgeValidation* ptr;
    AgeValidation a1;
    a1.setAge(56);
    a1.setName("amit");

    cout<<"AGE IS  "<<a1.getAge()<<endl;
    cout<<"NAME IS  "<<a1.getName()<<endl;

    ptr=a1.getObject();

    cout<<"current object name=   "<<ptr->getName()<<endl;



    return 0;

}

//explain the code
// This C++ code defines a class named `AgeValidation` that encapsulates the properties of a person, specifically their name and age. The class includes private member variables for `name` and `age`, along with public getter and setter methods to access and modify these variables. The setter method for age includes validation to ensure that the age is within a reasonable range (greater than 0 and less than 90). If an invalid age is provided, it sets the age to a default value of 18 and prints an error message. The class also has a method `getObject()` that returns a pointer to the current object instance. In the `main` function, an instance of `AgeValidation` is created, and its name and age are set using the setter methods. The values are then retrieved and printed using the getter methods. Finally, a pointer to the current object is obtained using the `getObject()` method, and the name is printed again through this pointer. This demonstrates encapsulation, data validation, and object-oriented programming principles in C++.