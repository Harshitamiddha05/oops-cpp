/*to read a content of file and paste in other file*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int id,age;
    string name;
    char ch;
    ofstream f;
    f.open("source.txt");
    cout<<"\nEnter the data for employees:";
    for(int i=0;i<2;i++)
    {
        cout<<"\nData for employee "<<i+1<<endl;
        f<<"\nData of employee "<<i+1<<":"<<endl;
        cout<<"Employee id:";
        cin>>id;
        f<<"Id:"<<id<<endl;
        cout<<"\nName:";
        cin>>name;
        f<<"Name:"<<name<<endl;
        cout<<"\nAge:";
        cin>>age;
        f<<"Age:"<<age<<endl;
    }
    ifstream f1;
    f1.open("source.txt");
    ofstream f2;
    f2.open("des.txt");
    while(f1)
    {
        f1.get(ch);
        f2<<ch;
    }
    f1.close();
    f2.close();
    ifstream f3;
    f3.open("des.txt");
    cout<<"\nContent of file:";
    while(f3)
    {
        f3.get(ch);
        cout<<ch;
    }
    f3.close();
}