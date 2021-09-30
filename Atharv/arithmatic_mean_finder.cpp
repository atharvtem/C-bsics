#include<iostream>
using namespace std;

int main()
{
    int a,d,l;
    cout<<"a- First Number \n";
    cout<<"d- common difference \n";
    cout<<"l- last number \n";
    cout<<"Input data: \n";
    cout<<"a = ";
    cin>>a;
    cout<<"d = ";
    cin>>d;
    cout<<"l = ";
    cin>>l;
    
    if(d>0)
    {
        while(a<=l)
        {
            cout << a;
            cout << "\n";
            a += d; 
        }
    }

    else
    {
        while(a>=l)
        {
            cout << a;
            cout << "\n";
            a += d; 
        }

    }    
    return 0;
}