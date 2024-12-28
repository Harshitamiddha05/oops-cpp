#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    friend istream& operator>>(istream& in, Person& p);
    void display()
    {
        cout << "Name: " << name <<endl;
        cout<<"Age: " << age << endl;
    }
};
istream& operator>>(istream& in, Person& p) 
{
    cout << "Enter name: ";
    in >> p.name;
    cout << "Enter age: ";
    in >> p.age;
    return in;
}

int main() {
    Person p;
    cin >> p;          
    p.display();       
    return 0;
}
