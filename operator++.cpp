#include<iostream>
using namespace std;
class num
{
    int a;
    public:num(int x)
    {
        a=x;
    }
    void operator ++(int)
    {
        a=a+1;
    }
    void show()
    {
        cout<<"value of a:"<<a;
    }
};
int main()
{
    int x;
    cout<<"enter number:";
    cin>>x;
    num n1(x);
    n1++;
    n1.show();
}