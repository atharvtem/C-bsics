#include<iostream>
using namespace std;

int main()
{
    int x;
    int reverse=0;
    cout << "Enter your Number" << "\n";
    cin >> x;

    while(x>0)
    {
        int lastdigit = x%10;
        reverse = reverse*10 + lastdigit;
        x=x/10;
    }
    cout << reverse << "\n";

}