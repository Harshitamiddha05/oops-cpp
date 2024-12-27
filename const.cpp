#include<iostream>
using namespace std;
class p
{
    public:p()
    {
        cout<<"p constructor"<<endl;
    }
    p(p &a)
    {
        cout<<"p copy constructor"<<endl;
    }
    p& operator=(const p &a)
    {
        if(this==&a)
        return *this;
            cout<<"p assignment operator"<<endl;
            return *this;
    }
};
class q
{
    p a;
    public:
    q(p &a):a(a)
    {
        cout<<"q constructor"<<endl;
    }
};
int main()
{
    p a;
    q b(a);
}