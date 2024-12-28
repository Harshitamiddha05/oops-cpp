#include<iostream>
using namespace std;
class person
{
    string nm;
    int age;
    public:person(string n,int a)
    {
        nm=n;
        age=a;
    }
    friend ostream& operator <<(ostream &out,person &p);
};
ostream& operator <<(ostream& out,person &p)
{
    out<<"name:"<<p.nm<<endl;
    out<<"age:"<<p.age<<endl;
    return out;
}
int main()
{
    string n;
    int a;
    cout<<"Enter name and age of a person:";
    cin>>n>>a;
    person p(n,a);
    cout<<p<<endl;
}