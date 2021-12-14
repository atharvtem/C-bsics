#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number" << "\n";
    cin >> n;
    int factorial=1;
    for(int i=2;i<=n;i++)
    {
        
        factorial*=i;
    }
    cout << "Factorial of given number is: " << factorial << "\n";
}