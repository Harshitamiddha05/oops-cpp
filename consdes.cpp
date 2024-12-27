#include<iostream>
using namespace std;
class base
{
    public:base()
    {
        cout<<"constructor of base class 1."<<endl;
    }
    ~base()
    {
        cout<<"destructor of base class 1"<<endl;
    }
};
class base1
{
    public:base1()
    {
        cout<<"constructor of base class 2."<<endl;
    }
    ~base1()
    {
        cout<<"Destructor of base class 2."<<endl;
    }
};
class base2:public base,public base1
{
    public:base2()
    {
        cout<<"constructor of derived class."<<endl;
    }
    ~base2()
    {
        cout<<"destructor of derived class."<<endl;
    }
};
int main()
{
    base2 c1;
    return 0;
}