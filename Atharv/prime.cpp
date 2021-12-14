#include<iostream>
using namespace std;

int main()
{
    int x;
    bool condition;
    cout << "enter number:" << "\n";
    cin >> x;

    for(int i=2;i<x;i++)
    {
        if(x%i==0)
        {
            condition = 1;
            cout << "Number is not Prime" << "\n";
            break;
        }

        if(condition==0)
        {
            cout << "Number is Prime" << "\n";
            break;
        }
    }
}