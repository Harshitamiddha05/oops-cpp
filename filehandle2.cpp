/*create a file num.txt having numbers in it and read the file and paste even numbers from file to even.txt*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int num;
    ofstream f1;
    f1.open("num.txt");
    cout<<"\nenter the numbers:";
    for(int i=0;i<12;i++)
    {
        cin>>num;
        f1<<num<<endl;
    }
    f1.close();
    ifstream f2;
    f2.open("num.txt");
    ofstream f3;
    f3.open("even.txt");
    //f3<<"\nEven numbers:"<<endl;
    while(f2>>num)
    {
        if(num%2==0)
        {
            f3<<num<<endl;
        }
    }
    f2.close();
    f3.close();
    cout<<"\ncontent of file even.txt:"<<endl;
    ifstream f4;
    f4.open("even.txt");
    while(f4>>num)
    {
        cout<<num<<endl;
    }
    f4.close();
}
