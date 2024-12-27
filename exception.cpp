#include<iostream>
using namespace std;
int main()
{
    int num,deno;
    int res=0;
    cout<<"\nEnter numerator and denominator:";
    cin>>num>>deno;
    try
    {
        if(deno==0)
        {
            throw deno;
        }
    res=num/deno;
    }
    catch(int ex)
    {
        cout<<"\nException:denominator 0 is not excepted !";
    }
    cout<<"\nDivision is "<<res;
    return 0;   
}