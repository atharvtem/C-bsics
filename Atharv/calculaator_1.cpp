#include <iostream>
using namespace std;

int main()
{
    char operation;
    float x,y;
    cout << "Press + for Addition \n";
    cout << "Press - for Substraction \n";
    cout << "Press * for Multiplition \n";
    cout << "Press / for Divisionion \n";
    cin >> operation;
    cout << "Enter your First number: ";
    cin >> x;
    cout << "Enter your Second number: ";
    cin >> y;
    

    switch(operation)
    {
        case '+':
            cout << "Addition : " << x + y;
            break;
        case '-':
            cout << "Substraction : " << x - y;
            break;
        case '*':
            cout << "Multiplication : " << x * y;
            break;
        case '/':
            cout << "Division : " << x / y;
            break;
        default :
            cout << "Error! (404) Operation Not Found (xD)";
            break;
    }

}