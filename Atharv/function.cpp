#include<iostream>
using namespace std;

int fun1(int x)
{
    return x * x;
}

void fun2()
{
    cout << "This is second function" << endl;
}

void fun3()
{
    cout << "This is last function" << endl;
}

int main()
{
    int x;
    cin >> x;
    cout << "Square: " << fun1(5) << endl;
    fun2();
    fun3();
    
}