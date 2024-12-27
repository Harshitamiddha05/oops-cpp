#include<iostream>
using namespace std;
class complex
{
    int a,b;
    public:complex()
    {
        a=0;
        b=0;
    }
    complex(int x)
    {
        a=x;
        b=0;
    }
    complex(int x,int y)
    {
        a=x;
        b=y;
    }
    void print()
    {
        cout<<"complex number is "<<a<<"+"<<b<<"i"<<endl;
    }
};
int main()
{
    complex c1(4);
    c1.print();
    complex c2(4,5);
    c2.print();
    return 0;
}