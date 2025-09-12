#include<iostream>
using namespace std;
struct Person{
    string name;
    int age;
    float height;
};
Person person1;
int main(){
    person1.name="Ayush";
    person1.age=18;
    person1.height=1.6f;

    cout<<"Name:"<<person1.name<<endl;
    cout<<"Age:"<<person1.age<<endl;
    cout<<"Height:"<<person1.height<<endl;

return 0;
}