#include<iostream>
using namespace std;

int fact(int x)
{
    int factorial=1;
    for(int i=2; i<=x ; i++ )
    {
        factorial*=i;
    }
    return factorial;
}

int main()
{
    int n;
    int r;
    cout << "Enter n: " << "\n";
    cin >> n;
    cout << "Enter r: " << "\n";
    cin >> r;
    int a=fact(n);
    int b=fact(n-r);
    int c=fact(r);
    int d=b*c;
    int e=a/d;
    cout << n << "C" << r << "= " << e << "\n";
}