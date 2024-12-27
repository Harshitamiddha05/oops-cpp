#include<iostream>
using namespace std;
class num
{
    static int c;
    public:num()
    {
        c++;
        cout<<"constructor is called for object "<<c<<endl;
    }
    ~num()
    {
        cout<<"destructor is called for object "<<c<<endl;
        c--;
    }
};
int num::c=0;
int main()
{
    cout<<"entering main"<<endl;
    cout<<"Creating first object"<<endl;
    num n1;
    {
        cout<<"entering the block"<<endl;
        cout<<"creating two more objects"<<endl;
        num n2,n3;
        cout<<"exiting the block"<<endl;
    }
    cout<<"returned back to main block"<<endl;
}