/*Implement a class Publication which has a title. Derive two classes from
it. A class Book which has an accession number and a class Magazine
which has volume number. With these two as bases, derive the class
Journal. Define a function showlnfo() in each of these classes. Ensure
that the derived class function always invokes the base(s) class function.
In main() create object of derived class with an accession number 1000
and a volume number 20. Invoke the showlnfo() function for this object.*/
#include<iostream>
using namespace std;
class publication
{
    protected:string title;
    public:void set_title(string t)
    {
        title=t;
    }
    void show_info()
    {
        cout<<"title:"<<title<<endl;
    }
};
class book:virtual public publication
{
    protected:int accession_no;
    public:void set_access(int a)
    {
        accession_no=a;
    }
    void show_info()
    {
        publication::show_info();
        cout<<"accession number:"<<accession_no<<endl;
    }
};
class magazine:virtual public publication
{
    protected:int volume;
    public:void set_volume(int v)
    {
        volume=v;
    }
    void show_info()
    {
        publication::show_info();
        cout<<"volume:"<<volume<<endl;   
    }
};
class journal:public book,public magazine
{
    public:journal(string t,int v,int a)
    {
        publication::set_title(t);
        book::set_access(a);
        magazine::set_volume(v);
    }
    void show_info()
    {
        book::show_info();
        magazine::show_info();
    }
};
int main()
{
    journal j("lost",20,1000);
    j.show_info();
}